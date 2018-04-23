#include "taskpage.h"
#include "ui_taskpage.h"

taskPage::taskPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::taskPage)
{
    ui->setupUi(this);
    cb = ui->comboBox;
    newFile();
    show_widgets();
}

taskPage::~taskPage()
{
    delete ui;
}

void taskPage::show_widgets(){
    while(auto item =  ui->tasks_l->takeAt(0))
        delete item->widget();
    std::vector<Task> tasks = board->getTasks();
    bool show_all = false;
    if (ui->comboBox->currentText() == "All tasks")
        show_all = true;
    for (int i=0;i<tasks.size();i++)
    {
        if (show_all or tasks.at(i).getStatus() < 100)
        {
            TaskWidget* w = new TaskWidget();
            taskwidgets.push_back(w);
            w->innit(&(tasks.at(i)), i);
            ui->tasks_l->addWidget(w);
            connect(w, SIGNAL(deleted(int)), this, SLOT(remove_task(int)));
            connect(w, SIGNAL(changed(QString,QString,int,int)), this, SLOT(change_task(QString,QString,int,int)));
        }
    }
}

void taskPage::newFile(){
    board = new Board("NewBoard.todo");
    curFile=QString::null;
    show_widgets();
    force_rename(QString::fromStdString(board->getName()));
}

void taskPage::on_new_task_b_clicked()
{
    create_task();
}

void taskPage::create_task()
{
    New_task* popup = new New_task();
    connect(popup, SIGNAL(task_created(QString,QString)), this, SLOT(new_task(QString,QString)));
    popup->exec();
}

void taskPage::new_task(QString task_name, QString task_desc)
{
    Task new_task(task_name.toUtf8().constData(), task_desc.toUtf8().constData());
    board->addTask(new_task);
    show_widgets();
}

void taskPage::remove_task(int id){
   board->removeTask(id);
   show_widgets();
}

void taskPage::change_task(QString name, QString desc, int status, int id){
    auto tasks = board->getTasks();
    tasks[id].setName(name.toUtf8().constData());
    tasks[id].setDescription(desc.toUtf8().constData());
    tasks[id].setStatus(status);
    board->setTasks(tasks);
}

void taskPage::on_comboBox_currentIndexChanged(const QString &arg1)
{
    show_widgets();
}

void taskPage::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    auto loaded = Board::load(fileName.toUtf8().constData());
    board->setName(loaded.getName());
    board->setTasks(loaded.getTasks());
    force_rename(QString::fromStdString(board->getName()));
    show_widgets();
}

void taskPage::saveAsFile()
{
    QFileDialog dialog(this);
    dialog.setDefaultSuffix(".todo");
    dialog.setWindowModality(Qt::WindowModal);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    if (dialog.exec() != QDialog::Accepted)
        return;
    board->save(dialog.selectedFiles().first().toUtf8().constData());
    board->setName(dialog.selectedFiles().first().toUtf8().constData());
    curFile = dialog.selectedFiles().first();
    force_rename(QString::fromStdString(board->getName()));
}

void taskPage::saveFile()
{
    if (curFile.isEmpty())
        saveAsFile();
    else
        board->save(curFile.toUtf8().constData());
}

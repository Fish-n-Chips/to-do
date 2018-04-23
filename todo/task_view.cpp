#include "task_view.h"
#include "ui_taskview.h"

Task_view::Task_view(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::taskview)
{
//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, Qt::red);
//    setPalette(Pal);
    ui->setupUi(this);
    ui->editButton->setIcon(QIcon(":/images/images/edit.png"));
    ui->deleteButton->setIcon(QIcon(":/images/images/trash.png"));
}

Task_view::~Task_view()
{
    delete ui;
}

void Task_view::innit(QString name, QString desc, int status)
{
    this->name = name;
    this->desc = desc;
    this->status = status;
    ui->task_name->setText(name);
    ui->task_desc->setText(desc);
    ui->task_status->setText(QString::number(status));
}

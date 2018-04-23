#include "taskwidget.h"
#include "ui_taskwidget.h"

TaskWidget::TaskWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskWidget)
{
    ui->setupUi(this);
    ui->editButton->setIcon(QIcon(":/images/images/edit.png"));
    ui->deleteButton->setIcon(QIcon(":/images/images/trash.png"));
    ui->task_desc->setDisabled(true);
    ui->task_status->setDisabled(true);
    ui->editButton->setCheckable(true);
    ui->task_status->setValidator( new QIntValidator(0, 100, this) );
}

TaskWidget::~TaskWidget()
{
    delete ui;
}

void TaskWidget::innit(QString name, QString desc, int status, int id)
{
    this->name = name;
    this->desc = desc;
    this->status = status;
    this->id = id;
    ui->task_name->setText(name);
    ui->task_desc->setText(desc);
    ui->task_status->setText(QString::number(status));
}

void TaskWidget::innit(Task* t, int id)
{
    this->name = QString::fromStdString(t->getName());
    this->desc = QString::fromStdString(t->getDescription());
    this->status = t->getStatus();
    this->id = id;
    ui->task_name->setText(name);
    ui->task_desc->setText(desc);
    ui->task_status->setText(QString::number(status));
}

void TaskWidget::on_deleteButton_clicked()
{
    deleted(id);
}

void TaskWidget::on_editButton_clicked()
{
    bool checked = ui->editButton->isChecked();
    ui->editButton->setChecked(checked);
    ui->task_desc->setEnabled(checked);
    ui->task_status->setEnabled(checked);
    if (checked == false)
        changed(ui->task_name->text(), ui->task_desc->toPlainText(), ui->task_status->text().toInt(), id);
}

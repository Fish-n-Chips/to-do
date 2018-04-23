#include "new_task.h"
#include "ui_new_task.h"

New_task::New_task(QWidget *parent) :
    QDialog(parent, Qt::WindowCloseButtonHint),
    ui(new Ui::New_task)
{
    ui->setupUi(this);
    ui->name_field->setText("New Task");
    setWindowTitle("Create new task");
}

New_task::~New_task()
{
    delete ui;
}

void New_task::on_name_field_textEdited(const QString &arg1)
{
    if (arg1.size() > 0)
        ui->buttonOk->button(QDialogButtonBox::Ok)->setDisabled(false);
    else
        ui->buttonOk->button(QDialogButtonBox::Ok)->setDisabled(true);
}


void New_task::on_buttonOk_accepted()
{
    task_created(ui->name_field->text(), ui->desc_field->toPlainText());
}

#ifndef NEW_TASK_H
#define NEW_TASK_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class New_task;
}

class New_task : public QDialog
{
    Q_OBJECT

public:
    explicit New_task(QWidget *parent = 0);
    ~New_task();

private slots:
    void on_name_field_textEdited(const QString &arg1);

    void on_buttonOk_accepted();

private:
    Ui::New_task *ui;
signals:
    void task_created(QString task_name, QString task_desc);
};

#endif // NEW_TASK_H

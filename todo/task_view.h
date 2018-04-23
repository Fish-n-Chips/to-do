#ifndef TASK_H
#define TASK_H

#include <QWidget>

namespace Ui {
class Task_view;
}

class Task_view : public QWidget
{
    Q_OBJECT

public:
    explicit Task_view(QWidget *parent = 0);
    void innit(QString name, QString desc, int status);
    ~Task_view();

private:
    Ui::Task_view *ui;
    QString name = QString('Unknown task');
    QString desc = QString('Enter description here');
    int status = 0;
};

#endif // TASK_H

#ifndef TASKWIDGET_H
#define TASKWIDGET_H

#include <QWidget>
#include <task.h>

namespace Ui {
class TaskWidget;
}

class TaskWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TaskWidget(QWidget *parent = 0);
    void innit(QString name, QString desc, int status, int id);
    void innit(Task* t, int id);
    ~TaskWidget();

private slots:
    void on_deleteButton_clicked();

    void on_editButton_clicked();

private:
    Ui::TaskWidget *ui;
    QString name = QString('Unknown task');
    QString desc = QString('Enter description here');
    int status = 0;
    int id;
signals:
    void deleted(int id);
    void changed(QString name, QString desc, int status, int id);
};

#endif // TASKWIDGET_H

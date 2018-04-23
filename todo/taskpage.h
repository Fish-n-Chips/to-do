#ifndef TASKPAGE_H
#define TASKPAGE_H

#include <QWidget>
#include <taskwidget.h>
#include <task.h>
#include <board.h>
#include <new_task.h>
#include <QFileDialog>
#include <QComboBox>

namespace Ui {
class taskPage;
}

class taskPage : public QWidget
{
    Q_OBJECT

public:
    explicit taskPage(QWidget *parent = 0);
    QVector<Task*> tasks;
    QVector<TaskWidget*> taskwidgets;
    Board* board;
    void create_task();
    QString curFile;
    QComboBox* cb;
    ~taskPage();

private:
    Ui::taskPage *ui;
    void show_widgets();
public slots:
    void newFile();
    void openFile();
    void saveAsFile();
    void saveFile();
signals:
    void force_rename(QString name);
private slots:
    void on_new_task_b_clicked();
    void new_task(QString task_name, QString task_desc);
    void remove_task(int id);
    void change_task(QString name, QString desc, int status, int id);
    void on_comboBox_currentIndexChanged(const QString &arg1);
};

#endif // TASKPAGE_H

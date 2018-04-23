#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainlayout.h"
#include "taskpage.h"
#include "help.h"

#include <QPushButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    taskPage* main_layout = new taskPage();
    help* about;
    //components

    void createActions();
public slots:
    void rename(QString name);
    void show_all();
    void show_open();
    void show_help();
};

#endif // MAINWINDOW_H

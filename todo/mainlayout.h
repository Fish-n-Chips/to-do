#ifndef MAINLAYOUT_H
#define MAINLAYOUT_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>

#include <QLabel>
#include <QComboBox>
#include "task_view.h"

class MainLayout : public QWidget
{
    Q_OBJECT
public:
    explicit MainLayout(QWidget *parent = nullptr);
private:
    QVBoxLayout* main_l;
    QHBoxLayout* controls_l;
    QVBoxLayout* tasks_l;

    QComboBox* task_selector;

signals:

public slots:
};

#endif // MAINLAYOUT_H

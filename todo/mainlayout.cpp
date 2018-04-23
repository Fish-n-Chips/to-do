#include "mainlayout.h"

MainLayout::MainLayout(QWidget *parent) : QWidget(parent)
{
    main_l = new QVBoxLayout;
    controls_l = new QHBoxLayout;
    tasks_l = new QVBoxLayout;
    this->setLayout(main_l);
    main_l->addLayout(controls_l);
    main_l->addLayout(tasks_l);

    QLabel* task_selector_label = new QLabel("Show: ");
    task_selector = new QComboBox();
    task_selector->addItem("All tasks");
    task_selector->addItem("Open tasks");
    task_selector->addItem("Closed tasks");
    controls_l->addWidget(task_selector_label);
    controls_l->addWidget(task_selector);
    controls_l->addStretch();

    for (int i =0; i<5; i++){
        Task* t = new Task();
        t->innit(QString('ГО ЛОЛ'), QString('апрарпрапрп'), 57);
        tasks_l->addWidget(t);

    }
}

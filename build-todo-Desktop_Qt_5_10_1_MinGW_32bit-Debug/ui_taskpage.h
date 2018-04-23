/********************************************************************************
** Form generated from reading UI file 'taskpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPAGE_H
#define UI_TASKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *new_task_b;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *tasks_l;

    void setupUi(QWidget *taskPage)
    {
        if (taskPage->objectName().isEmpty())
            taskPage->setObjectName(QStringLiteral("taskPage"));
        taskPage->resize(407, 513);
        gridLayout = new QGridLayout(taskPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(taskPage);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(taskPage);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        new_task_b = new QToolButton(taskPage);
        new_task_b->setObjectName(QStringLiteral("new_task_b"));

        horizontalLayout->addWidget(new_task_b);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(taskPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 385, 463));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tasks_l = new QGridLayout();
        tasks_l->setObjectName(QStringLiteral("tasks_l"));

        gridLayout_3->addLayout(tasks_l, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(taskPage);

        QMetaObject::connectSlotsByName(taskPage);
    } // setupUi

    void retranslateUi(QWidget *taskPage)
    {
        taskPage->setWindowTitle(QApplication::translate("taskPage", "Form", nullptr));
        label->setText(QApplication::translate("taskPage", "Show:", nullptr));
        comboBox->setItemText(0, QApplication::translate("taskPage", "All tasks", nullptr));
        comboBox->setItemText(1, QApplication::translate("taskPage", "Open tasks", nullptr));

        new_task_b->setText(QApplication::translate("taskPage", "New...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskPage: public Ui_taskPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPAGE_H

/********************************************************************************
** Form generated from reading UI file 'task_view.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_VIEW_H
#define UI_TASK_VIEW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *task_name;
    QSpacerItem *horizontalSpacer;
    QToolButton *editButton;
    QToolButton *deleteButton;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *task_desc;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *task_status;
    QLabel *label_3;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName(QStringLiteral("Task"));
        Task->resize(395, 178);
        gridLayout = new QGridLayout(Task);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        task_name = new QLabel(Task);
        task_name->setObjectName(QStringLiteral("task_name"));
        task_name->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Sans Unicode"));
        font.setPointSize(12);
        task_name->setFont(font);
        task_name->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_4->addWidget(task_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        editButton = new QToolButton(Task);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_4->addWidget(editButton);

        deleteButton = new QToolButton(Task);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_4->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        task_desc = new QTextEdit(Task);
        task_desc->setObjectName(QStringLiteral("task_desc"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(task_desc->sizePolicy().hasHeightForWidth());
        task_desc->setSizePolicy(sizePolicy);
        task_desc->setMaximumSize(QSize(16777215, 100));
        QFont font1;
        font1.setPointSize(12);
        task_desc->setFont(font1);
        task_desc->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_3->addWidget(task_desc);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        task_status = new QLineEdit(Task);
        task_status->setObjectName(QStringLiteral("task_status"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(task_status->sizePolicy().hasHeightForWidth());
        task_status->setSizePolicy(sizePolicy1);
        task_status->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(task_status);

        label_3 = new QLabel(Task);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QApplication::translate("Task", "Form", nullptr));
        task_name->setText(QApplication::translate("Task", "Unknown task", nullptr));
        editButton->setText(QString());
        deleteButton->setText(QString());
        task_status->setText(QApplication::translate("Task", "00", nullptr));
        label_3->setText(QApplication::translate("Task", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_VIEW_H

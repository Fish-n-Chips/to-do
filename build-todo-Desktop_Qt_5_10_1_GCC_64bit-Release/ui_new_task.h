/********************************************************************************
** Form generated from reading UI file 'new_task.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_TASK_H
#define UI_NEW_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_New_task
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *name_field;
    QLabel *label_2;
    QTextEdit *desc_field;
    QDialogButtonBox *buttonOk;

    void setupUi(QDialog *New_task)
    {
        if (New_task->objectName().isEmpty())
            New_task->setObjectName(QStringLiteral("New_task"));
        New_task->resize(461, 243);
        gridLayout_3 = new QGridLayout(New_task);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(New_task);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        name_field = new QLineEdit(New_task);
        name_field->setObjectName(QStringLiteral("name_field"));

        gridLayout_2->addWidget(name_field, 0, 1, 1, 1);

        label_2 = new QLabel(New_task);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        desc_field = new QTextEdit(New_task);
        desc_field->setObjectName(QStringLiteral("desc_field"));

        gridLayout_2->addWidget(desc_field, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        buttonOk = new QDialogButtonBox(New_task);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        buttonOk->setOrientation(Qt::Horizontal);
        buttonOk->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonOk, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(New_task);
        QObject::connect(buttonOk, SIGNAL(accepted()), New_task, SLOT(accept()));
        QObject::connect(buttonOk, SIGNAL(rejected()), New_task, SLOT(reject()));

        QMetaObject::connectSlotsByName(New_task);
    } // setupUi

    void retranslateUi(QDialog *New_task)
    {
        New_task->setWindowTitle(QApplication::translate("New_task", "Dialog", nullptr));
        label->setText(QApplication::translate("New_task", "Name:", nullptr));
        label_2->setText(QApplication::translate("New_task", "Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_task: public Ui_New_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_TASK_H

#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QDialog(parent, Qt::WindowCloseButtonHint),
    ui(new Ui::help)
{
    ui->setupUi(this);
    setWindowTitle("About");
}

help::~help()
{
    delete ui;
}

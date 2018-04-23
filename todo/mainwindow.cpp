#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QAction *quit = new QAction("&Quit", this);
    //setMinimumSize(400, 600);
    resize(400, 600);
    createActions();
    setCentralWidget(main_layout);
    connect(main_layout, SIGNAL(force_rename(QString)), this, SLOT(rename(QString)));
    setWindowTitle("TO-DO: NewBoard.todo");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions()
{
    // New action
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    const QIcon newIcon = QIcon::fromTheme("document-new", QIcon(":/images/images/new.png"));
    QAction *newAct = new QAction(newIcon, tr("&New"), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Create a new file"));
    fileMenu->addAction(newAct);
    connect(newAct, &QAction::triggered, main_layout, &taskPage::newFile);

    //Open action
    const QIcon openIcon = QIcon::fromTheme("document-open", QIcon(":/images/images/open.png"));
    QAction *openAct = new QAction(openIcon, tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);
    openAct->setStatusTip(tr("Open existing file"));
    fileMenu->addAction(openAct);
    connect(openAct, &QAction::triggered, main_layout, &taskPage::openFile);

    //Save action
    const QIcon saveIcon = QIcon::fromTheme("document-save", QIcon(":/images/images/save.png"));
    QAction *saveAct = new QAction(saveIcon, tr("&Save"), this);
    saveAct->setShortcuts(QKeySequence::Save);
    saveAct->setStatusTip(tr("Save current file"));
    fileMenu->addAction(saveAct);
    connect(saveAct, &QAction::triggered, main_layout, &taskPage::saveFile);

    //Save as action
    QAction *saveAsAct = new QAction(saveIcon, tr("&Save as..."), this);
    saveAsAct->setShortcuts(QKeySequence::SaveAs);
    saveAsAct->setStatusTip(tr("Save current file with name"));
    fileMenu->addAction(saveAsAct);
    connect(saveAsAct, &QAction::triggered, main_layout, &taskPage::saveAsFile);

    fileMenu->addSeparator();
    const QIcon exitIcon = QIcon::fromTheme("application-exit");
    QAction *exitAct = fileMenu->addAction(exitIcon, tr("E&xit"), this, &QWidget::close);
    exitAct->setShortcuts(QKeySequence::Quit);
    exitAct->setStatusTip(tr("Exit the application"));
    fileMenu->addAction(exitAct);

    QMenu *showMenu = menuBar()->addMenu(tr("&Show"));
    QAction *showAll = new QAction(tr("&All"), this);
    showAll->setShortcuts(QKeySequence::FindNext);
    showAll->setStatusTip(tr("Show all tasks"));
    showMenu->addAction(showAll);
    connect(showAll, &QAction::triggered, this, show_all);

    QAction *showOpen = new QAction(tr("&Open"), this);
    showOpen->setShortcuts(QKeySequence::FindPrevious);
    showOpen->setStatusTip(tr("Show open tasks"));
    showMenu->addAction(showOpen);
    connect(showOpen, &QAction::triggered, this, show_open);

    QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
    QAction *about = new QAction(tr("&About"), this);
    about->setShortcuts(QKeySequence::HelpContents);
    about->setStatusTip(tr("TO-DO App info"));
    helpMenu->addAction(about);
    connect(about, &QAction::triggered, this, show_help);
}

void MainWindow::rename(QString name){
    setWindowTitle("TO-DO: "+name);
}

void MainWindow::show_all()
{
    main_layout->cb->setCurrentIndex(0);
}

void MainWindow::show_open()
{
    main_layout->cb->setCurrentIndex(1);
}

void MainWindow::show_help()
{
    about = new help;
    about->exec();
}


#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenu* session = new  QMenu(this);
    session = menuBar()->addMenu(tr("&Menu"));
    QAction* newProject = new QAction(tr("&New Project"));
    session->addAction(newProject);
    //
    tabWidget = new QTabWidget;
    wel= new Welcome;
    tabWidget->addTab(wel, "Welcome Widget");
    setCentralWidget(tabWidget);
    connect(newProject, SIGNAL(triggered()),
            this, SLOT(openProject()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newPageTabWindow(QWidget* w, QString str)
{
    QString strPage = QString(str).arg(mapCountP);
    tabWidget->addTab(w, strPage);
}

void MainWindow::openProject()
{
    project* pW = new project(this);
    connect(pW->button, SIGNAL(clicked()),
            this, SLOT(openResults()));
    mapCountP++;
    QString strP = QString("Project %1").arg(mapCountP);
    mapProject[strP] = pW;
    newPageTabWindow(pW, strP);
}

void MainWindow::openResults()
{
    results* rW = new results(this);
    mapCountR++;
    QString strR = QString("Results %1").arg(mapCountR);
    mapResults[strR] = rW;
    newPageTabWindow(rW, strR);
}


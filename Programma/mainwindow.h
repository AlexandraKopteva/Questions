#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "results.h"
#include "project.h"
#include "welcome.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTabWidget* tabWidget;
    project* pro;
    results* res;
    Welcome* wel;
    int mapCountP=0;
    int mapCountR=0;
    QMap<QString, project*> mapProject;
    QMap<QString, results*> mapResults;
private slots:
    void newPageTabWindow(QWidget* w, QString str);
    void openProject();
    void openResults();
};
#endif // MAINWINDOW_H

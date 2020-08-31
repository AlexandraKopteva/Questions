#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMouseEvent>
#include "blocksheme.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    view = new QGraphicsView(this);
    scene = new QGraphicsScene(this);
    view->setScene(scene);
    this->setCentralWidget(view);
    geometryCounter = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::reDraw()
{
    scene->update();
    update();
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        BlockSheme *item;
        if (geometryCounter == 4)
            geometryCounter = 0;
        item = new BlockSheme(this,geometryCounter);
        geometryCounter++;
        item->setBrush(QBrush(QColor(rand() % 256,rand() % 256,rand() % 256)));
        scene->addItem(item);
        //QPoint point = event->pos();
        item->setPos(event->pos().x(),event->pos().y());
        connect(item, SIGNAL(reDraw()),this,SLOT(reDraw()));
    }
}

void MainWindow::wheelEvent(QWheelEvent *event)
{
        const double scaleFactor = 1.15;
        if (event->delta() > 0) {
            view->scale(scaleFactor, scaleFactor);
        }
        else{
            view->scale(1.0 / scaleFactor, 1.0 / scaleFactor);
        }
}

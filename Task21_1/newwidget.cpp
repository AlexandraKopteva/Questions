#include "newwidget.h"

NewWidget::NewWidget()
{
    readFile();
    Wlabel = new QLabel(this);
    Wtimer = new QTimer(this);
    Wbutton = new QPushButton("Change Text", this);
    connect(Wbutton, &QPushButton::clicked, [&] () {
        Wbutton->setEnabled(false);
        updateEdit();
        Wtimer->start();
    });
    Wtimer->setInterval(1000);
    connect(Wtimer, &QTimer::timeout, [&] () {
        if (--Wcount > 0) {
            updateEdit();
        } else {
            Wtimer->stop();
            Wbutton->setEnabled(true);
        }
    });
    Wlayout = new QHBoxLayout();
    Wlayout->addWidget(Wbutton);
    Wlayout->addWidget(Wlabel);
    setLayout(Wlayout);
}

NewWidget::~NewWidget()
{
}

void NewWidget::updateEdit()
{
    QListIterator<QString> iter(list);
    iter.toFront();
    //
    while (iter.hasNext()){
        Wlabel->setText(iter.next());
    }
}
void NewWidget::readFile()
{
    QFile pFile(":/Hotkeys.txt");
    QString str="";
    QTextStream stream(&pFile);
    list.clear();

    if(!pFile.open(QIODevice::ReadOnly|QIODevice::Text))
    {
            QMessageBox::warning(this,"Error!File does not exist!",
                                 QString::fromLocal8Bit("Error opening file!"),
                                 QMessageBox::Yes);
            return;
    } else {
        while(!stream.atEnd())
        {
            Wcount++;
            str = stream.readLine();
            list.append(str);
            str.clear();
        }
    }
    pFile.close();
}

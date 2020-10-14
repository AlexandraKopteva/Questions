#include "welcome.h"

Welcome::Welcome(QWidget* widget): QWidget(widget)
{
    vResults = new QVBoxLayout;
    resLabel = new QLabel("Welcome Widget", this);
    vResults->addWidget(resLabel, 1, Qt::AlignCenter);
    setLayout(vResults);
}
Welcome::~Welcome()
{

}

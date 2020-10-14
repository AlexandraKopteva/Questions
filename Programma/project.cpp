#include "project.h"


project::project(QWidget* widget): QWidget(widget)
{
    vProject = new QVBoxLayout;
    proLabel = new QLabel("PROJECT", this);
    button = new QPushButton("START WORK", this);
    vProject->addWidget(proLabel, 1, Qt::AlignCenter);
    vProject->addWidget(button, 1, Qt::AlignCenter);
    setLayout(vProject);
}
project::~project()
{
}

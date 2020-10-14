#include "results.h"

results::results(QWidget* widget): QWidget(widget)
{
    vResults = new QVBoxLayout;
    resLabel = new QLabel("RESULTS", this);
    vResults->addWidget(resLabel, 1, Qt::AlignCenter);
    setLayout(vResults);
}
results::~results()
{

}

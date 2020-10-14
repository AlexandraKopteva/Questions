#ifndef RESULTS_H
#define RESULTS_H

#include<QtWidgets>

class results : public QWidget
{
public:
    results(QWidget* widget = nullptr);
    ~results();
private:
    QVBoxLayout* vResults;
    QLabel* resLabel;
};

#endif // RESULTS_H

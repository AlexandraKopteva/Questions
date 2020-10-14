#pragma once
#include<QtWidgets>

class Welcome : public QWidget
{
public:
    Welcome(QWidget* widget = nullptr);
    ~Welcome();
private:
    QVBoxLayout* vResults;
    QLabel* resLabel;
};


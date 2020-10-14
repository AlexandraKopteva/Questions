#ifndef PROJECT_H
#define PROJECT_H

#include<QtWidgets>

class project : public QWidget
{
public:
    project(QWidget* widget = nullptr);
    ~project();
    QPushButton* button;
private:
    QVBoxLayout* vProject;
    QLabel* proLabel;
};

#endif // PROJECT_H

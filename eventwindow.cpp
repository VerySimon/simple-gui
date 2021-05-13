#include "eventwindow.h"
#include "ui_eventwindow.h"

EventWindow::EventWindow(QWidget *parent) :
    QWidget(parent),
    peventWindowUi(new Ui::EventWindow)
{
    peventWindowUi->setupUi(this);
    this->setWindowTitle(QString("Event Window"));
}

EventWindow::~EventWindow()
{
    delete peventWindowUi;
}

//send close EventWindow signal
void EventWindow::on_eventBackButton_clicked(bool checked)
{
    if(!checked)
        emit _EventBackSignal();
}

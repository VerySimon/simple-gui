#include "objectwindow.h"
#include "ui_objectwindow.h"

ObjectWindow::ObjectWindow(QWidget *parent) :
    QWidget(parent),
    pobjectWindowUi(new Ui::ObjectWindow)
{
    pobjectWindowUi->setupUi(this);
    this->setWindowTitle(QString("Object Window"));
}

ObjectWindow::~ObjectWindow()
{
    delete pobjectWindowUi;
}

//send close ObjectWindow signal
void ObjectWindow::on_objectBackButton_clicked(bool checked)
{
    if(!checked)
        emit _ObjectBackSignal();
}

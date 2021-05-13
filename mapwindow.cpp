#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent) :
    QWidget(parent),
    pmapWindowUi(new Ui::MapWindow)
{
    pmapWindowUi->setupUi(this);
    this->setWindowTitle(QString("Map Window"));
}

MapWindow::~MapWindow()
{
    delete pmapWindowUi;
}

//send close MapWindow signal
void MapWindow::on_mapBackButton_clicked(bool checked)
{
    if(!checked)
        emit _MapBackSignal();
}

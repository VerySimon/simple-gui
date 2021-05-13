#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
//#include <QDebug> //qDebug()<< XXX ~ cout<< XXX
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , pmainWindowUi(new Ui::MainWindow)
{
    pmainWindowUi->setupUi(this);
    this->setWindowTitle(QString("Main Window"));
    //connect(Qobject* sender,char* signal,Qobject* mether,char* slot)
    //signal function ~ slot function
    connect(&objectWindow,&ObjectWindow::_ObjectBackSignal,this,&MainWindow::_ObjectBackSlot);
    connect(&mapWindow,&MapWindow::_MapBackSignal,this,&MainWindow::_MapBackSlot);
    connect(&eventWindow,&EventWindow::_EventBackSignal,this,&MainWindow::_EventBackSlot);
}

MainWindow::~MainWindow()
{
    delete pmainWindowUi;
}

//show ObjectWindow
void MainWindow::on_objectButton_clicked(bool checked)
{
    if(!checked)
        objectWindow.show();
}

//show MapWindow
void MainWindow::on_mapButton_clicked(bool checked)
{
    if(!checked)
        mapWindow.show();
}

//show EventWindow
void MainWindow::on_eventButton_clicked(bool checked)
{
    if(!checked)
        eventWindow.show();
}

//close ObjectWindow
void MainWindow::_ObjectBackSlot()
{
    objectWindow.close();
}

//close MapWindow
void MainWindow::_MapBackSlot()
{
    mapWindow.close();
}

//close EventWindow
void MainWindow::_EventBackSlot()
{
    eventWindow.close();
}

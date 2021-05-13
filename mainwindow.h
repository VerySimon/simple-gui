#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mapwindow.h"
#include "eventwindow.h"
#include "objectwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

private slots:
    void on_objectButton_clicked(bool checked);
    void on_mapButton_clicked(bool checked);
    void on_eventButton_clicked(bool checked);
    void _ObjectBackSlot();
    void _MapBackSlot();
    void _EventBackSlot();

private:
    Ui::MainWindow *pmainWindowUi;
    ObjectWindow objectWindow;
    MapWindow mapWindow;
    EventWindow eventWindow;
};
#endif // MAINWINDOW_H

#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QWidget>

namespace Ui {
class MapWindow;
}

class MapWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = nullptr);
    ~MapWindow();

signals:
    void _MapBackSignal();

private slots:
    void on_mapBackButton_clicked(bool checked);

private:
    Ui::MapWindow *pmapWindowUi;
};

#endif // MAPWINDOW_H

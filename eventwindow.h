#ifndef EVENTWINDOW_H
#define EVENTWINDOW_H

#include <QWidget>

namespace Ui {
class EventWindow;
}

class EventWindow : public QWidget
{
    Q_OBJECT

public:
    explicit EventWindow(QWidget *parent = nullptr);
    ~EventWindow();

signals:
    void _EventBackSignal();

private slots:
    void on_eventBackButton_clicked(bool checked);

private:
    Ui::EventWindow *peventWindowUi;
};

#endif // EVENTWINDOW_H

#ifndef OBJECTWINDOW_H
#define OBJECTWINDOW_H

#include <QWidget>

namespace Ui {
class ObjectWindow;
}

class ObjectWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ObjectWindow(QWidget *parent = nullptr);
    ~ObjectWindow();

signals:
    void _ObjectBackSignal();

private slots:
    void on_objectBackButton_clicked(bool checked);

private:
    Ui::ObjectWindow *pobjectWindowUi;
};

#endif // OBJECTWINDOW_H

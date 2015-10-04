#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QUdpSocket>

#include <settings.h>

namespace Ui {
class Client;
}

//class QUdpSocket;
class QTimer;

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();

private slots:
    void on_actionSettings_triggered();

    void on_actionExit_triggered();

    void broadcastDatagram();

    void on_RCoxa_horizontalSlider_valueChanged(int value);

    void on_RFermur_dial_valueChanged(int value);

    void on_RTibia_dial_valueChanged(int value);

private:
    Ui::Client *ui;
    QUdpSocket *udpSocket;
    QTimer *timer;
    int broadcast_value;
};

#endif // CLIENT_H

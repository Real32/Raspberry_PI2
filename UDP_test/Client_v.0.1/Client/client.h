#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>

#include <settings.h>

namespace Ui {
class Client;
}

class QUdpSocket;
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

private:
    Ui::Client *ui;
    Settings * formSettings;
    QUdpSocket *udpSocket;
    QTimer *timer;
    int messageNo;
};

#endif // CLIENT_H

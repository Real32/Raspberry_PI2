#ifndef CLIENT_H
#define CLIENT_H

#include <QLabel>
#include <QDialogButtonBox>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include <QTcpSocket>
#include <QMessageBox>
#include <QGridLayout>

class QDialogButtonBox;
class QLabel;
class QPushButton;
class QTimer;
class QUdpSocket;

class Sender : public QDialog
{
    Q_OBJECT

public:
    Sender(QWidget *parent = 0);

private slots:
    void startBroadcasting();
    void broadcastDatagram();

private:
    QLabel *statusLabel;
    QPushButton *startButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QUdpSocket *udpSocket;
    QTimer *timer;
    int messageNo;
};

#endif

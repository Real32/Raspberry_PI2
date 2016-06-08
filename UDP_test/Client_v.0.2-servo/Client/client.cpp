#include <QtNetwork>
#include <QString>
#include "client.h"
#include "settings.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);

    udpSocket = new QUdpSocket(this);
    udpSocket -> bind(QHostAddress("192.168.0.2"),45454);
    broadcast_value = 0;

  //  connect(ui->SendButton, SIGNAL(clicked()), this, SLOT(broadcastDatagram()));
   // connect(ui->RCoxa_horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->actionExit, SIGNAL(clicked()), this, SLOT(close()));

}

Client::~Client()
{
    delete ui;
}


void Client::on_actionExit_triggered()
{
    close();
}


void Client::broadcastDatagram()
{
   // QByteArray BroadcastMessage = Message.toLocal8Bit();
    ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(broadcast_value));
    //QByteArray datagram = "Broadcast message " + QByteArray::number(messageNo);
    QByteArray datagram = /*BroadcastMessage  + */QByteArray::number(broadcast_value);
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.4"),45454);
    ++broadcast_value;
}
/*
void Client::on_ON_pushButton_clicked()
{
    const QString one = "1";
    QByteArray one_message = one.toLocal8Bit();
    QByteArray datagram = one_message;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.11"),45454);

}
*/


void Client::on_RCoxa_horizontalSlider_valueChanged(int value)
{
    broadcast_value = value;
 //   QByteArray L1Coxa_value = one.toLocal8Bit();
    QByteArray datagram;
    datagram.resize(3);
    datagram[0]='4';
    datagram[1]='C';
    datagram[2]=value;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.4"),45454);
    ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(broadcast_value));
}

void Client::on_RFermur_dial_valueChanged(int value)
{
    broadcast_value = value;
 //   QByteArray L1Coxa_value = one.toLocal8Bit();
    QByteArray datagram;
    datagram.resize(3);
    datagram[0]='4';
    datagram[1]='F';
    datagram[2]=value;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.9"),45454);
    ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(broadcast_value));
}

void Client::on_RTibia_dial_valueChanged(int value)
{
    broadcast_value = value;
 //   QByteArray L1Coxa_value = one.toLocal8Bit();
    QByteArray datagram;
    datagram.resize(3);
    datagram[0]='4';
    datagram[1]='T';
    datagram[2]=value;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.9"),45454);
    ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(broadcast_value));
}

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
    udpSocket -> bind(QHostAddress("192.168.0.9"),45454);
    messageNo = 1;

    connect(ui->SendButton, SIGNAL(clicked()), this, SLOT(broadcastDatagram()));
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
    const QString Message = ui->Message_lineEdit->text();
    QByteArray BroadcastMessage = Message.toLocal8Bit();
    ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(messageNo));
    //QByteArray datagram = "Broadcast message " + QByteArray::number(messageNo);
    QByteArray datagram = BroadcastMessage/* + QByteArray::number(messageNo)*/;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.11"),45454);
    ++messageNo;
}

void Client::on_ON_pushButton_clicked()
{
    const QString one = "1";
    QByteArray one_message = one.toLocal8Bit();
    QByteArray datagram = one_message;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.11"),45454);

}

void Client::on_OFF_pushButton_clicked()
{
    const QString zero = "0";
    QByteArray zero_message = zero.toLocal8Bit();
    QByteArray datagram = zero_message;
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("192.168.0.11"),45454);
}

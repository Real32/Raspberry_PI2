#include <QtNetwork>
#include <QString>
#include "client.h"
#include "ui_client.h"
Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    formSettings = new Settings(this);

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

void Client::on_actionSettings_triggered()
{

    formSettings->show();
}

void Client::on_actionExit_triggered()
{
    close();
}


void Client::broadcastDatagram()
{
    const QString Message = ui->Message_lineEdit->text();
    QByteArray ba = Message.toLocal8Bit();
    ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(messageNo));
    //QByteArray datagram = "Broadcast message " + QByteArray::number(messageNo);
    QByteArray datagram = ba + QByteArray::number(messageNo);
    udpSocket->writeDatagram(datagram.data(), datagram.size(),
                             QHostAddress("192.168.0.9"),45454);
    ++messageNo;
}

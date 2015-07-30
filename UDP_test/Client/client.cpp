 #include <QtGui>
 #include <QtNetwork>

 #include "client.h"

 Sender::Sender(QWidget *parent)
     : QDialog(parent)
 {
     statusLabel = new QLabel(tr("Ready to broadcast datagrams on port 45454"));

     startButton = new QPushButton(tr("&Start"));
     quitButton = new QPushButton(tr("&Quit"));

     buttonBox = new QDialogButtonBox;
     buttonBox->addButton(startButton, QDialogButtonBox::ActionRole);
     buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);

     timer = new QTimer(this);
     udpSocket = new QUdpSocket(this);
     messageNo = 1;

     connect(startButton, SIGNAL(clicked()), this, SLOT(startBroadcasting()));
     connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
     connect(timer, SIGNAL(timeout()), this, SLOT(broadcastDatagram()));

     QVBoxLayout *mainLayout = new QVBoxLayout;
     mainLayout->addWidget(statusLabel);
     mainLayout->addWidget(buttonBox);
     setLayout(mainLayout);

     setWindowTitle(tr("Broadcast Sender"));
 }

 void Sender::startBroadcasting()
 {
     startButton->setEnabled(false);
     timer->start(1000);
 }

 void Sender::broadcastDatagram()
 {
     statusLabel->setText(tr("Now broadcasting datagram %1").arg(messageNo));
     QByteArray datagram = "Broadcast message " + QByteArray::number(messageNo);
     udpSocket->writeDatagram(datagram.data(), datagram.size(),
                              QHostAddress::Broadcast, 45454);
     ++messageNo;
 }

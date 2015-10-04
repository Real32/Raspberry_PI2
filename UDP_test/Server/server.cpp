#include <QtGui>
#include <QtNetwork>

 #include "server.h"

 Receiver::Receiver(QWidget *parent)
     : QDialog(parent)
 {
     statusLabel = new QLabel(tr("Listening for broadcasted messages"));
     quitButton = new QPushButton(tr("&Quit"));

     udpSocket = new QUdpSocket(this);
     udpSocket->bind(QHostAddress("127.0.0.1"),45454);

     connect(udpSocket, SIGNAL(readyRead()), this, SLOT(processPendingDatagrams()));
     connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
     connect(udpSocket, SIGNAL(processPendingDatagrams()), this, SLOT (checkValues()));

     QHBoxLayout *buttonLayout = new QHBoxLayout;
     buttonLayout->addStretch(1);
     buttonLayout->addWidget(quitButton);
     buttonLayout->addStretch(1);

     QVBoxLayout *mainLayout = new QVBoxLayout;
     mainLayout->addWidget(statusLabel);
     mainLayout->addLayout(buttonLayout);
     setLayout(mainLayout);

     setWindowTitle(tr("Broadcast Receiver"));
 }

 void Receiver::processPendingDatagrams()
 {
     while (udpSocket->hasPendingDatagrams())
     {
         //     QByteArray datagram;
         datagram.resize(udpSocket->pendingDatagramSize());
         udpSocket->readDatagram(datagram.data(), datagram.size());
         statusLabel->setText(tr("Received datagram: \"%1\"")
                              .arg(datagram.data()));
         checkValues();
     }
 }


void Receiver::checkValues()
{
//Left1
    if ((int)datagram.at(0)!=old_L1coxa)
    {qDebug() << "0" << (int)datagram.at(0);
        old_L1coxa=(int)datagram.at(0);
    }
    if ((int)datagram.at(1)!=old_L1fermur)
    {qDebug() << "1" << (int)datagram.at(1);
        old_L1fermur=(int)datagram.at(1);
    }
    if ((int)datagram.at(2)!=old_L1tibia)
    {qDebug() << "2" << (int)datagram.at(2);
        old_L1tibia=(int)datagram.at(2);
    }
//Left2
    if ((int)datagram.at(3)!=old_L2coxa)
    {qDebug() << "3" << (int)datagram.at(3);
        old_L2coxa=(int)datagram.at(3);
    }
    if ((int)datagram.at(4)!=old_L2fermur)
    {qDebug() << "4" << (int)datagram.at(4);
        old_L2fermur=(int)datagram.at(4);
    }
    if ((int)datagram.at(5)!=old_L2tibia)
    {qDebug() << "5" << (int)datagram.at(5);
        old_L2tibia=(int)datagram.at(5);
    }
//Left3
    if ((int)datagram.at(6)!=old_L3coxa)
    {qDebug() << "6" << (int)datagram.at(6);
        old_L3coxa=(int)datagram.at(6);
    }
    if ((int)datagram.at(7)!=old_L3fermur)
    {qDebug() << "7" << (int)datagram.at(7);
        old_L3fermur=(int)datagram.at(7);
    }
    if ((int)datagram.at(8)!=old_L3tibia)
    {qDebug() << "8" << (int)datagram.at(8);
        old_L3tibia=(int)datagram.at(8);
    }
//Right1
    if ((int)datagram.at(9)!=old_R1coxa)
    {qDebug() << "9" << (int)datagram.at(9);
        old_R1coxa=(int)datagram.at(9);
    }
    if ((int)datagram.at(10)!=old_R1fermur)
    {qDebug() << "10" << (int)datagram.at(10);
        old_R1fermur=(int)datagram.at(10);
    }
    if ((int)datagram.at(11)!=old_R1tibia)
    {qDebug() << "11" << (int)datagram.at(11);
        old_R1tibia=(int)datagram.at(11);
    }
//Right2
    if ((int)datagram.at(12)!=old_R2coxa)
    {qDebug() << "12" << (int)datagram.at(12);
        old_R2coxa=(int)datagram.at(12);
    }
    if ((int)datagram.at(13)!=old_R2fermur)
    {qDebug() << "13" << (int)datagram.at(13);
        old_R2fermur=(int)datagram.at(13);
    }
    if ((int)datagram.at(14)!=old_R2tibia)
    {qDebug() << "14" << (int)datagram.at(14);
        old_R2tibia=(int)datagram.at(14);
    }
//Right3
    if ((int)datagram.at(15)!=old_R3coxa)
    {qDebug() << "15" << (int)datagram.at(15);
        old_R3coxa=(int)datagram.at(15);
    }
    if ((int)datagram.at(16)!=old_R3fermur)
    {qDebug() << "16" << (int)datagram.at(16);
        old_R3fermur=(int)datagram.at(16);
    }
     if ((int)datagram.at(17)!=old_R3tibia)
    {qDebug() << "17" << (int)datagram.at(17);
         old_R3tibia=(int)datagram.at(17);
     }
}

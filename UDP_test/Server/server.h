#ifndef SERVER_H
#define SERVER_H

#include <QLabel>
#include <QDialogButtonBox>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include <QUdpSocket>
#include <QMessageBox>
#include <QGridLayout>

#define  L1coxa 0;
#define  L1fermur 2;
#define  L1tibia 3;

#define  L2coxa 21;
#define  L2fermur 22;
#define  L2tibia 23;

#define  L3coxa 24;
#define  L3fermur 25;
#define  L3tibia 26;

#define  R1coxa 7;
#define  R1fermur 1;
#define  R1tibia 4;

#define  R2coxa 5;
#define  R2fermur 6;
#define  R2tibia 10;

#define  R3coxa 27;
#define  R3fermur 28;
#define  R3tibia 29;

 class QLabel;
 class QPushButton;
 class QUdpSocket;

 class Receiver : public QDialog
 {
     Q_OBJECT

 public:
     Receiver(QWidget *parent = 0);

 private slots:
     void processPendingDatagrams();
     void checkValues();
 private:
     QLabel *statusLabel;
     QPushButton *quitButton;
     QUdpSocket *udpSocket;
     QByteArray datagram;
     int old_L1coxa;
     int old_L1fermur;
     int old_L1tibia;

     int old_L2coxa;
     int old_L2fermur;
     int old_L2tibia;

     int old_L3coxa;
     int old_L3fermur;
     int old_L3tibia;

     int old_R1coxa;
     int old_R1fermur;
     int old_R1tibia;

     int old_R2coxa;
     int old_R2fermur;
     int old_R2tibia;

     int old_R3coxa;
     int old_R3fermur;
     int old_R3tibia;
 };

#endif // SERVER_H

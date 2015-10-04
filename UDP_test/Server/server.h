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

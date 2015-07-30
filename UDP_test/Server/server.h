#ifndef SERVER_H
#define SERVER_H

#include <QLabel>
#include <QDialogButtonBox>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include <QTcpSocket>
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

 private:
     QLabel *statusLabel;
     QPushButton *quitButton;
     QUdpSocket *udpSocket;
 };

#endif // SERVER_H

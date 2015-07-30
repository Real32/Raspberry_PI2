#ifndef SERVER_H
 #define SERVER_H

 #include <QDialog>
 #include <QLabel>
 #include <QDialogButtonBox>
 #include <QLineEdit>
 #include <QPushButton>
 #include <QTcpSocket>
 #include <QMessageBox>
 #include <QGridLayout>
 class QLabel;
 class QPushButton;
 class QTcpServer;

 class Server : public QDialog
 {
     Q_OBJECT

 public:
     Server(QWidget *parent = 0);

 private slots:
     void sendFortune();

 private:
     QLabel *statusLabel;
     QPushButton *quitButton;
     QTcpServer *tcpServer;
     QStringList fortunes;
 };

 #endif

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QUdpSocket>
#include <QtNetwork>
#include <QString>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void broadcastDatagram();
    void on_L1_coxa_dial_valueChanged(int value);

    void on_L1_fermur_dial_valueChanged(int value);

    void on_L1_tibia_dial_valueChanged(int value);

    void on_L2_coxa_dial_valueChanged(int value);

    void on_L2_fermur_dial_valueChanged(int value);

    void on_L2_tibia_dial_valueChanged(int value);

    void on_L3_coxa_dial_valueChanged(int value);

    void on_L3_fermur_dial_valueChanged(int value);

    void on_L3_tibia_dial_valueChanged(int value);

    void on_R1_coxa_dial_valueChanged(int value);

    void on_R1_fermur_dial_valueChanged(int value);

    void on_R1_tibia_dial_valueChanged(int value);

    void on_R2_coxa_dial_valueChanged(int value);

    void on_R2_fermur_dial_valueChanged(int value);

    void on_R2_tibia_dial_valueChanged(int value);

    void on_R3_coxa_dial_valueChanged(int value);

    void on_R3_fermur_dial_valueChanged(int value);

    void on_R3_tibia_dial_valueChanged(int value);

    void on_Height_label_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    QUdpSocket *udpSocket;

    QTimer *timer;

    QByteArray datagram;
};

#endif // MAINWINDOW_H

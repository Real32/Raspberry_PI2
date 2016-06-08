#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    udpSocket = new QUdpSocket(this);
    udpSocket -> bind(QHostAddress("10.0.0.52"/*"127.0.0.1"*/),45454);

    connect(ui->L1_coxa_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->L1_fermur_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->L1_tibia_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    connect(ui->L2_coxa_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->L2_fermur_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->L2_tibia_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    connect(ui->L3_coxa_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->L3_fermur_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->L3_tibia_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    connect(ui->R1_coxa_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->R1_fermur_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->R1_tibia_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    connect(ui->R2_coxa_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->R2_fermur_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->R2_tibia_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    connect(ui->R3_coxa_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->R3_fermur_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    connect(ui->R3_tibia_dial, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    connect(ui->Height_label, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));
    // connect(ui->RCoxa_horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(broadcastDatagram()));

    datagram.resize(20);
for(int i=0; i<20; i++)
    datagram[i]=0;
}


void MainWindow::broadcastDatagram()
{
    //ui->statusBar->showMessage(tr("Now broadcasting datagram %1").arg(broadcast_value));
    udpSocket->writeDatagram(datagram.data(), datagram.size(), QHostAddress("10.0.0.4"/* "127.0.0.1"*/),45454);
    ui->statusBar->showMessage(datagram.data());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_L1_coxa_dial_valueChanged(int value)
{
    //datagram;
    // datagram.resize(3);
    //datagram[0]='1';
    //datagram[1]='C';
    //datagram[2]=value;
    datagram[0]=value;

    ui->L1_coxa_label->setText(QString::number(value));
}

void MainWindow::on_L1_fermur_dial_valueChanged(int value)
{
    datagram[1]=value;

    ui->L1_fermur_label->setText(QString::number(value));
}

void MainWindow::on_L1_tibia_dial_valueChanged(int value)
{
    datagram[2]=value;

    ui->L1_tibia_label->setText(QString::number(value));
}

void MainWindow::on_L2_coxa_dial_valueChanged(int value)
{
    datagram[3]=value;

    ui->L2_coxa_label->setText(QString::number(value));
}

void MainWindow::on_L2_fermur_dial_valueChanged(int value)
{
    datagram[4]=value;

    ui->L2_fermur_label->setText(QString::number(value));
}

void MainWindow::on_L2_tibia_dial_valueChanged(int value)
{
    datagram[5]=value;

    ui->L2_tibia_label->setText(QString::number(value));
}

void MainWindow::on_L3_coxa_dial_valueChanged(int value)
{
    datagram[6]=value;

    ui->L3_coxa_label->setText(QString::number(value));
}

void MainWindow::on_L3_fermur_dial_valueChanged(int value)
{
    datagram[7]=value;

    ui->L3_fermur_label->setText(QString::number(value));
}

void MainWindow::on_L3_tibia_dial_valueChanged(int value)
{
    datagram[8]=value;

    ui->L3_tibia_label->setText(QString::number(value));
}

void MainWindow::on_R1_coxa_dial_valueChanged(int value)
{
    datagram[9]=value;

    ui->R1_coxa_label->setText(QString::number(value));
}

void MainWindow::on_R1_fermur_dial_valueChanged(int value)
{
    datagram[10]=value;

    ui->R1_fermur_label->setText(QString::number(value));
}

void MainWindow::on_R1_tibia_dial_valueChanged(int value)
{
    datagram[11]=value;

    ui->R1_tibia_label->setText(QString::number(value));
}

void MainWindow::on_R2_coxa_dial_valueChanged(int value)
{
    datagram[12]=value;

    ui->R2_coxa_label->setText(QString::number(value));
}

void MainWindow::on_R2_fermur_dial_valueChanged(int value)
{
    datagram[13]=value;

    ui->R2_fermur_label->setText(QString::number(value));
}

void MainWindow::on_R2_tibia_dial_valueChanged(int value)
{
    datagram[14]=value;

    ui->R2_tibia_label->setText(QString::number(value));
}

void MainWindow::on_R3_coxa_dial_valueChanged(int value)
{
    datagram[15]=value;

    ui->R3_coxa_label->setText(QString::number(value));
}

void MainWindow::on_R3_fermur_dial_valueChanged(int value)
{
    datagram[16]=value;

    ui->R3_fermur_label->setText(QString::number(value));
}

void MainWindow::on_R3_tibia_dial_valueChanged(int value)
{
    datagram[17]=value;

    ui->R3_tibia_label->setText(QString::number(value));
}

void MainWindow::on_Height_label_valueChanged(int value)
{
    datagram[1]=value;
    datagram[4]=value;
    datagram[7]=value;
    datagram[10]=value;
    datagram[13]=value;
    datagram[16]=value;
}

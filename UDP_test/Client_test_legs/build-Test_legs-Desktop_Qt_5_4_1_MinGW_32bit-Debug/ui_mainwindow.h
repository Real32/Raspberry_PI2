/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QGroupBox *L1groupBox;
    QGridLayout *gridLayout_2;
    QDial *L1_coxa_dial;
    QDial *L1_fermur_dial;
    QDial *L1_tibia_dial;
    QLabel *L1_coxa_label;
    QLabel *L1_fermur_label;
    QLabel *L1_tibia_label;
    QGroupBox *R1groupBox;
    QGridLayout *gridLayout_6;
    QDial *R1_coxa_dial;
    QDial *R1_fermur_dial;
    QDial *R1_tibia_dial;
    QLabel *R1_coxa_label;
    QLabel *R1_fermur_label;
    QLabel *R1_tibia_label;
    QGroupBox *L2groupBox;
    QGridLayout *gridLayout_3;
    QDial *L2_coxa_dial;
    QDial *L2_fermur_dial;
    QDial *L2_tibia_dial;
    QLabel *L2_coxa_label;
    QLabel *L2_fermur_label;
    QLabel *L2_tibia_label;
    QGroupBox *R2groupBox;
    QGridLayout *gridLayout_7;
    QDial *R2_coxa_dial;
    QDial *R2_fermur_dial;
    QDial *R2_tibia_dial;
    QLabel *R2_coxa_label;
    QLabel *R2_fermur_label;
    QLabel *R2_tibia_label;
    QGridLayout *gridLayout;
    QSlider *Height_label;
    QLabel *label;
    QGroupBox *L3groupBox;
    QGridLayout *gridLayout_5;
    QDial *L3_coxa_dial;
    QDial *L3_fermur_dial;
    QDial *L3_tibia_dial;
    QLabel *L3_coxa_label;
    QLabel *L3_fermur_label;
    QLabel *L3_tibia_label;
    QGroupBox *R3groupBox;
    QGridLayout *gridLayout_4;
    QDial *R3_coxa_dial;
    QDial *R3_fermur_dial;
    QDial *R3_tibia_dial;
    QLabel *R3_coxa_label;
    QLabel *R3_fermur_label;
    QLabel *R3_tibia_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(650, 450);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        L1groupBox = new QGroupBox(centralWidget);
        L1groupBox->setObjectName(QStringLiteral("L1groupBox"));
        gridLayout_2 = new QGridLayout(L1groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        L1_coxa_dial = new QDial(L1groupBox);
        L1_coxa_dial->setObjectName(QStringLiteral("L1_coxa_dial"));
        L1_coxa_dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        L1_coxa_dial->setMaximum(25);

        gridLayout_2->addWidget(L1_coxa_dial, 0, 0, 1, 1);

        L1_fermur_dial = new QDial(L1groupBox);
        L1_fermur_dial->setObjectName(QStringLiteral("L1_fermur_dial"));
        L1_fermur_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        L1_fermur_dial->setMaximum(25);

        gridLayout_2->addWidget(L1_fermur_dial, 0, 1, 1, 1);

        L1_tibia_dial = new QDial(L1groupBox);
        L1_tibia_dial->setObjectName(QStringLiteral("L1_tibia_dial"));
        L1_tibia_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        L1_tibia_dial->setMaximum(25);

        gridLayout_2->addWidget(L1_tibia_dial, 0, 2, 1, 1);

        L1_coxa_label = new QLabel(L1groupBox);
        L1_coxa_label->setObjectName(QStringLiteral("L1_coxa_label"));

        gridLayout_2->addWidget(L1_coxa_label, 1, 0, 1, 1);

        L1_fermur_label = new QLabel(L1groupBox);
        L1_fermur_label->setObjectName(QStringLiteral("L1_fermur_label"));

        gridLayout_2->addWidget(L1_fermur_label, 1, 1, 1, 1);

        L1_tibia_label = new QLabel(L1groupBox);
        L1_tibia_label->setObjectName(QStringLiteral("L1_tibia_label"));

        gridLayout_2->addWidget(L1_tibia_label, 1, 2, 1, 1);


        gridLayout_8->addWidget(L1groupBox, 0, 0, 1, 1);

        R1groupBox = new QGroupBox(centralWidget);
        R1groupBox->setObjectName(QStringLiteral("R1groupBox"));
        gridLayout_6 = new QGridLayout(R1groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        R1_coxa_dial = new QDial(R1groupBox);
        R1_coxa_dial->setObjectName(QStringLiteral("R1_coxa_dial"));
        R1_coxa_dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        R1_coxa_dial->setMaximum(25);

        gridLayout_6->addWidget(R1_coxa_dial, 0, 0, 1, 1);

        R1_fermur_dial = new QDial(R1groupBox);
        R1_fermur_dial->setObjectName(QStringLiteral("R1_fermur_dial"));
        R1_fermur_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        R1_fermur_dial->setMaximum(25);

        gridLayout_6->addWidget(R1_fermur_dial, 0, 1, 1, 1);

        R1_tibia_dial = new QDial(R1groupBox);
        R1_tibia_dial->setObjectName(QStringLiteral("R1_tibia_dial"));
        R1_tibia_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        R1_tibia_dial->setMaximum(25);

        gridLayout_6->addWidget(R1_tibia_dial, 0, 2, 1, 1);

        R1_coxa_label = new QLabel(R1groupBox);
        R1_coxa_label->setObjectName(QStringLiteral("R1_coxa_label"));

        gridLayout_6->addWidget(R1_coxa_label, 1, 0, 1, 1);

        R1_fermur_label = new QLabel(R1groupBox);
        R1_fermur_label->setObjectName(QStringLiteral("R1_fermur_label"));

        gridLayout_6->addWidget(R1_fermur_label, 1, 1, 1, 1);

        R1_tibia_label = new QLabel(R1groupBox);
        R1_tibia_label->setObjectName(QStringLiteral("R1_tibia_label"));

        gridLayout_6->addWidget(R1_tibia_label, 1, 2, 1, 1);


        gridLayout_8->addWidget(R1groupBox, 0, 1, 1, 1);

        L2groupBox = new QGroupBox(centralWidget);
        L2groupBox->setObjectName(QStringLiteral("L2groupBox"));
        gridLayout_3 = new QGridLayout(L2groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        L2_coxa_dial = new QDial(L2groupBox);
        L2_coxa_dial->setObjectName(QStringLiteral("L2_coxa_dial"));
        L2_coxa_dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        L2_coxa_dial->setMaximum(25);

        gridLayout_3->addWidget(L2_coxa_dial, 0, 0, 1, 1);

        L2_fermur_dial = new QDial(L2groupBox);
        L2_fermur_dial->setObjectName(QStringLiteral("L2_fermur_dial"));
        L2_fermur_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        L2_fermur_dial->setMaximum(25);

        gridLayout_3->addWidget(L2_fermur_dial, 0, 1, 1, 1);

        L2_tibia_dial = new QDial(L2groupBox);
        L2_tibia_dial->setObjectName(QStringLiteral("L2_tibia_dial"));
        L2_tibia_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        L2_tibia_dial->setMaximum(25);

        gridLayout_3->addWidget(L2_tibia_dial, 0, 2, 1, 1);

        L2_coxa_label = new QLabel(L2groupBox);
        L2_coxa_label->setObjectName(QStringLiteral("L2_coxa_label"));

        gridLayout_3->addWidget(L2_coxa_label, 1, 0, 1, 1);

        L2_fermur_label = new QLabel(L2groupBox);
        L2_fermur_label->setObjectName(QStringLiteral("L2_fermur_label"));

        gridLayout_3->addWidget(L2_fermur_label, 1, 1, 1, 1);

        L2_tibia_label = new QLabel(L2groupBox);
        L2_tibia_label->setObjectName(QStringLiteral("L2_tibia_label"));

        gridLayout_3->addWidget(L2_tibia_label, 1, 2, 1, 1);


        gridLayout_8->addWidget(L2groupBox, 1, 0, 1, 1);

        R2groupBox = new QGroupBox(centralWidget);
        R2groupBox->setObjectName(QStringLiteral("R2groupBox"));
        gridLayout_7 = new QGridLayout(R2groupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        R2_coxa_dial = new QDial(R2groupBox);
        R2_coxa_dial->setObjectName(QStringLiteral("R2_coxa_dial"));
        R2_coxa_dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        R2_coxa_dial->setMaximum(25);

        gridLayout_7->addWidget(R2_coxa_dial, 0, 0, 1, 1);

        R2_fermur_dial = new QDial(R2groupBox);
        R2_fermur_dial->setObjectName(QStringLiteral("R2_fermur_dial"));
        R2_fermur_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        R2_fermur_dial->setMaximum(25);

        gridLayout_7->addWidget(R2_fermur_dial, 0, 1, 1, 1);

        R2_tibia_dial = new QDial(R2groupBox);
        R2_tibia_dial->setObjectName(QStringLiteral("R2_tibia_dial"));
        R2_tibia_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        R2_tibia_dial->setMaximum(25);

        gridLayout_7->addWidget(R2_tibia_dial, 0, 2, 1, 1);

        R2_coxa_label = new QLabel(R2groupBox);
        R2_coxa_label->setObjectName(QStringLiteral("R2_coxa_label"));

        gridLayout_7->addWidget(R2_coxa_label, 1, 0, 1, 1);

        R2_fermur_label = new QLabel(R2groupBox);
        R2_fermur_label->setObjectName(QStringLiteral("R2_fermur_label"));

        gridLayout_7->addWidget(R2_fermur_label, 1, 1, 1, 1);

        R2_tibia_label = new QLabel(R2groupBox);
        R2_tibia_label->setObjectName(QStringLiteral("R2_tibia_label"));

        gridLayout_7->addWidget(R2_tibia_label, 1, 2, 1, 1);


        gridLayout_8->addWidget(R2groupBox, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Height_label = new QSlider(centralWidget);
        Height_label->setObjectName(QStringLiteral("Height_label"));
        Height_label->setStyleSheet(QStringLiteral(""));
        Height_label->setMaximum(25);
        Height_label->setOrientation(Qt::Vertical);

        gridLayout->addWidget(Height_label, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout, 1, 2, 2, 1);

        L3groupBox = new QGroupBox(centralWidget);
        L3groupBox->setObjectName(QStringLiteral("L3groupBox"));
        gridLayout_5 = new QGridLayout(L3groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        L3_coxa_dial = new QDial(L3groupBox);
        L3_coxa_dial->setObjectName(QStringLiteral("L3_coxa_dial"));
        L3_coxa_dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        L3_coxa_dial->setMaximum(25);

        gridLayout_5->addWidget(L3_coxa_dial, 0, 0, 1, 1);

        L3_fermur_dial = new QDial(L3groupBox);
        L3_fermur_dial->setObjectName(QStringLiteral("L3_fermur_dial"));
        L3_fermur_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        L3_fermur_dial->setMaximum(25);

        gridLayout_5->addWidget(L3_fermur_dial, 0, 1, 1, 1);

        L3_tibia_dial = new QDial(L3groupBox);
        L3_tibia_dial->setObjectName(QStringLiteral("L3_tibia_dial"));
        L3_tibia_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        L3_tibia_dial->setMaximum(25);

        gridLayout_5->addWidget(L3_tibia_dial, 0, 2, 1, 1);

        L3_coxa_label = new QLabel(L3groupBox);
        L3_coxa_label->setObjectName(QStringLiteral("L3_coxa_label"));

        gridLayout_5->addWidget(L3_coxa_label, 1, 0, 1, 1);

        L3_fermur_label = new QLabel(L3groupBox);
        L3_fermur_label->setObjectName(QStringLiteral("L3_fermur_label"));

        gridLayout_5->addWidget(L3_fermur_label, 1, 1, 1, 1);

        L3_tibia_label = new QLabel(L3groupBox);
        L3_tibia_label->setObjectName(QStringLiteral("L3_tibia_label"));

        gridLayout_5->addWidget(L3_tibia_label, 1, 2, 1, 1);


        gridLayout_8->addWidget(L3groupBox, 2, 0, 1, 1);

        R3groupBox = new QGroupBox(centralWidget);
        R3groupBox->setObjectName(QStringLiteral("R3groupBox"));
        gridLayout_4 = new QGridLayout(R3groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        R3_coxa_dial = new QDial(R3groupBox);
        R3_coxa_dial->setObjectName(QStringLiteral("R3_coxa_dial"));
        R3_coxa_dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        R3_coxa_dial->setMaximum(25);

        gridLayout_4->addWidget(R3_coxa_dial, 0, 0, 1, 1);

        R3_fermur_dial = new QDial(R3groupBox);
        R3_fermur_dial->setObjectName(QStringLiteral("R3_fermur_dial"));
        R3_fermur_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        R3_fermur_dial->setMaximum(25);

        gridLayout_4->addWidget(R3_fermur_dial, 0, 1, 1, 1);

        R3_tibia_dial = new QDial(R3groupBox);
        R3_tibia_dial->setObjectName(QStringLiteral("R3_tibia_dial"));
        R3_tibia_dial->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        R3_tibia_dial->setMaximum(25);

        gridLayout_4->addWidget(R3_tibia_dial, 0, 2, 1, 1);

        R3_coxa_label = new QLabel(R3groupBox);
        R3_coxa_label->setObjectName(QStringLiteral("R3_coxa_label"));

        gridLayout_4->addWidget(R3_coxa_label, 1, 0, 1, 1);

        R3_fermur_label = new QLabel(R3groupBox);
        R3_fermur_label->setObjectName(QStringLiteral("R3_fermur_label"));

        gridLayout_4->addWidget(R3_fermur_label, 1, 1, 1, 1);

        R3_tibia_label = new QLabel(R3groupBox);
        R3_tibia_label->setObjectName(QStringLiteral("R3_tibia_label"));

        gridLayout_4->addWidget(R3_tibia_label, 1, 2, 1, 1);


        gridLayout_8->addWidget(R3groupBox, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        L1groupBox->setTitle(QApplication::translate("MainWindow", "Left 1", 0));
        L1_coxa_label->setText(QApplication::translate("MainWindow", "0", 0));
        L1_fermur_label->setText(QApplication::translate("MainWindow", "0", 0));
        L1_tibia_label->setText(QApplication::translate("MainWindow", "0", 0));
        R1groupBox->setTitle(QApplication::translate("MainWindow", "Right 1", 0));
        R1_coxa_label->setText(QApplication::translate("MainWindow", "0", 0));
        R1_fermur_label->setText(QApplication::translate("MainWindow", "0", 0));
        R1_tibia_label->setText(QApplication::translate("MainWindow", "0", 0));
        L2groupBox->setTitle(QApplication::translate("MainWindow", "Left 2", 0));
        L2_coxa_label->setText(QApplication::translate("MainWindow", "0", 0));
        L2_fermur_label->setText(QApplication::translate("MainWindow", "0", 0));
        L2_tibia_label->setText(QApplication::translate("MainWindow", "0", 0));
        R2groupBox->setTitle(QApplication::translate("MainWindow", "Right 2", 0));
        R2_coxa_label->setText(QApplication::translate("MainWindow", "0", 0));
        R2_fermur_label->setText(QApplication::translate("MainWindow", "0", 0));
        R2_tibia_label->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Height", 0));
        L3groupBox->setTitle(QApplication::translate("MainWindow", "Left 3", 0));
        L3_coxa_label->setText(QApplication::translate("MainWindow", "0", 0));
        L3_fermur_label->setText(QApplication::translate("MainWindow", "0", 0));
        L3_tibia_label->setText(QApplication::translate("MainWindow", "0", 0));
        R3groupBox->setTitle(QApplication::translate("MainWindow", "Right 3", 0));
        R3_coxa_label->setText(QApplication::translate("MainWindow", "0", 0));
        R3_fermur_label->setText(QApplication::translate("MainWindow", "0", 0));
        R3_tibia_label->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

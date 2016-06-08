#include <QCoreApplication>
#include <attitude.h>
#include <testattitude.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    wiringPiSetup();
    Attitude attitude(&a);
    TestAttitude testAt(&a);
    QObject::connect(&attitude, SIGNAL(changeAttitude(short,short)), &testAt, SLOT(print(short,short)));
    return a.exec();
}

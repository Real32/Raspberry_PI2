#include <QCoreApplication>
#include <temperature.h>
#include <testtemperature.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    wiringPiSetup();
    Temperature temp(&a);
    TestTemperature testTemp(&a);
    QObject::connect(&temp, SIGNAL(changeTemperature(double)), &testTemp, SLOT(print(double)));
    return a.exec();
}

#include "testtemperature.h"

TestTemperature::TestTemperature(QObject *parent) : QObject(parent)
{

}

TestTemperature::~TestTemperature()
{

}

void TestTemperature::print(double temperature)
{
    qDebug()<<Q_FUNC_INFO<<temperature;
}


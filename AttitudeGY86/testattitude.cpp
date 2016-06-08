#include "testattitude.h"

TestAttitude::TestAttitude(QObject *parent) : QObject(parent)
{

}

TestAttitude::~TestAttitude()
{

}

void TestAttitude::print(short X, short Y)
{
    qDebug()<<Q_FUNC_INFO<<X << Y;
}


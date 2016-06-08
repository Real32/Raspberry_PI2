#include "attitude.h"

Attitude::Attitude(QObject *parent) : QObject(parent)
{
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(receiveAttitude()));
    const int mpu6050Address = 0x68; // MPU6050_ADDRESS (0x68)
    const int mpu6050RPM = 0x6b; //MPU6050_REG_DATA_START (0x6b)
    m_fd = wiringPiI2CSetup(mpu6050Address);
    if(checkRC())
    {
        // Perform I2C work
        wiringPiI2CWriteReg8(m_fd, mpu6050RPM, 0);
        //qDebug()<<Q_FUNC_INFO<<m_fd;
        m_interval = 500;
        m_timer->start(m_interval);
    }
}

Attitude::~Attitude()
{

}
int Attitude::interval() const
{
    return m_interval;
}

void Attitude::setInterval(int interval)
{
    if(m_interval > 0 && m_timer->isActive())
    {
        m_timer->stop();
        m_interval = interval;
        m_timer->start(m_interval);
    }
    else
    {
        qDebug()<<Q_FUNC_INFO<<"MPU6050 timer didn't start";
    }
}

void Attitude::receiveAttitude()
{
    static const int mpu6050RDS = 0x3b; // MPU6050_REG_DATA_START (0x3b)
    static const double aScale = 182.88; // 182.85; //163.84;
    quint8 msb = wiringPiI2CReadReg8(m_fd, mpu6050RDS);
    quint8 lsb = wiringPiI2CReadReg8(m_fd, mpu6050RDS+1);
    short accelX = msb << 8 | lsb;
//    if(accelX < 0)  // If you need to calibrate values, or your gy86 isn't in a plate - just use +, - const
//    {
//        accelX-=3;
//    }
    qDebug()<<Q_FUNC_INFO<<accelX;
    accelX/=aScale;

    msb = wiringPiI2CReadReg8(m_fd, mpu6050RDS+2);
    lsb = wiringPiI2CReadReg8(m_fd, mpu6050RDS+3);
    short accelY = msb << 8 | lsb;
//    if(accelY > 0)
//    {
//        accelY-=5;
//    }
//    else
//    {
//        accelY+=5;
//    }
    qDebug()<<Q_FUNC_INFO<<accelY;
    accelY/=aScale;
    emit changeAttitude(accelX, accelY);
}

bool Attitude::checkRC()
{
    if (m_fd < 0) {
      qDebug()<<Q_FUNC_INFO<<"MPU6050 init ERROR";
      emit errorAttitude();
      return false;
    }
    return true;
}



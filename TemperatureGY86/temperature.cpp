#include "temperature.h"

Temperature::Temperature(QObject *parent) : QObject(parent)
{
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(receiveTemperature()));
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

Temperature::~Temperature()
{

}
int Temperature::interval() const
{
    return m_interval;
}

void Temperature::setInterval(int interval)
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

void Temperature::receiveTemperature()
{
    static const int mpu6050RDS = 0x41; // MPU6050_RA_TEMP_OUT_H    (0x41)
    static const double aScale = 163.47;
    quint8 msb = wiringPiI2CReadReg8(m_fd, mpu6050RDS);
    quint8 lsb = wiringPiI2CReadReg8(m_fd, mpu6050RDS+1);
    double temperature = msb << 8 | lsb;
    qDebug()<<Q_FUNC_INFO<<temperature;
    temperature=temperature / 340.0 - aScale;

    emit changeTemperature(temperature);
}

bool Temperature::checkRC()
{
    if (m_fd < 0) {
      qDebug()<<Q_FUNC_INFO<<"MPU6050 init ERROR";
      emit errorTemperature();
      return false;
    }
    return true;
}


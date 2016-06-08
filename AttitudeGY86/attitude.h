#ifndef ATTITUDE_H
#define ATTITUDE_H
#include <QDebug>
#include <QObject>
#include <QTimer>
#include <wiringPi.h>
#include <wiringPiI2C.h>

class Attitude : public QObject
{
    Q_OBJECT
public:
    explicit Attitude(QObject *parent = 0);
    ~Attitude();
    int interval() const;

signals:
    void changeAttitude(short, short);
    void errorAttitude();
public slots:
    void setInterval(int interval);

private slots:
    void receiveAttitude();
private:
    bool checkRC();
    int m_fd;
    int m_interval;
    QTimer *m_timer;
};

#endif // ATTITUDE_H

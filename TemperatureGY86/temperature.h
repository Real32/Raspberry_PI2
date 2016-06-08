#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <QDebug>
#include <QObject>
#include <QTimer>
#include <wiringPi.h>
#include <wiringPiI2C.h>

class Temperature : public QObject
{
    Q_OBJECT
public:
    explicit Temperature(QObject *parent = 0);
    ~Temperature();
    int interval() const;

signals:
    void changeTemperature(double);
    void errorTemperature();
public slots:
    void setInterval(int interval);

private slots:
    void receiveTemperature();
private:
    bool checkRC();
    int m_fd;
    int m_interval;
    QTimer *m_timer;
};

#endif // TEMPERATURE_H

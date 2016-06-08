#ifndef TESTTEMPERATURE_H
#define TESTTEMPERATURE_H
#include <QDebug>
#include <QObject>

class TestTemperature : public QObject
{
    Q_OBJECT
public:
    explicit TestTemperature(QObject *parent = 0);
    ~TestTemperature();

signals:

public slots:
    void print(double temperature);
};

#endif // TESTTEMPERATURE_H

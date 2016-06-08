#ifndef TESTATTITUDE_H
#define TESTATTITUDE_H
#include <QDebug>
#include <QObject>

class TestAttitude : public QObject
{
    Q_OBJECT
public:
    explicit TestAttitude(QObject *parent = 0);
    ~TestAttitude();

signals:

public slots:
    void print(short X, short Y);
};

#endif // TESTATTITUDE_H

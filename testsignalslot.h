#ifndef TESTSIGNALSLOT_H
#define TESTSIGNALSLOT_H

#include <QObject>

class TestSignalSlot : public QObject
{
    Q_OBJECT
public:
    explicit TestSignalSlot(QObject *parent = 0);

signals:
    void full();
    void counter_changed(int i);

public slots:
    void button_pressed();

private:
    int counter;
    int Max;
};

#endif // TESTSIGNALSLOT_H

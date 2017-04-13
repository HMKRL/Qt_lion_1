#include "testsignalslot.h"

#include <iostream>
using namespace std;

TestSignalSlot::TestSignalSlot(QObject *parent) : QObject(parent), counter(0), Max(5)
{

}

void TestSignalSlot::button_pressed()
{
    counter++;
    emit counter_changed(counter);
    cout << "Button pressed." << endl;

    if(counter == Max) {
        emit full();
    }
}

#include <iostream>

#include <QtWidgets/QApplication>

#include "PulseOximeterSimulator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout << "Hello World!";
    PulseOximeterSimulator w;
    w.show();
    return a.exec();
}

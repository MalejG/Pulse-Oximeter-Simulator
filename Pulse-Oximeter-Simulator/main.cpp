#include "PulseOximeterSimulator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PulseOximeterSimulator w;
    w.show();
    return a.exec();
}

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PulseOximeterSimulator.h"

class PulseOximeterSimulator : public QMainWindow
{
    Q_OBJECT

public:
    PulseOximeterSimulator(QWidget *parent = nullptr);
    ~PulseOximeterSimulator();

private:
    Ui::PulseOximeterSimulatorClass ui;
};

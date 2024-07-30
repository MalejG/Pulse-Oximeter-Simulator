#pragma once
#include <iostream>

#include <QtWidgets/QMainWindow>


#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QTimer>

#include "ui_PulseOximeterSimulator.h"

class PulseOximeterSimulator : public QMainWindow
{
    Q_OBJECT

public:
    PulseOximeterSimulator(QWidget *parent = nullptr);
    ~PulseOximeterSimulator();
private slots:
    void Measuring();
    void ChangePatient();
    void updateMeasurement();

private:
    Ui::PulseOximeterSimulatorClass ui;
    QChart* chart;
    QLineSeries* series;
    QTimer* measurementTimer;
    int timeCounter;
    int beatsPerMinute;
    int samplesPerBeat;
    int samplesCount;
    QValueAxis* axisX;
    QValueAxis* axisY;
};

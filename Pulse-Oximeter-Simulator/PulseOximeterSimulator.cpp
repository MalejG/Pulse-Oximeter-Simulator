#include "PulseOximeterSimulator.h"
#include "Process.h"

{
    ui.setupUi(this);

    series = new QLineSeries();
    series->setPen(QPen(Qt::red, 1));

    chart = new QChart();
    chart->addSeries(series);
    chart->legend()->hide();
    chart->setTitle("");


    axisX = new QValueAxis;
    axisX->setRange(0, 10); 
    axisX->setVisible(false); 

    axisY = new QValueAxis;
    axisY->setRange(0, 1.6);
    axisY->setVisible(false);

    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);

    series->attachAxis(axisX);
    series->attachAxis(axisY);

    chart->setBackgroundBrush(Qt::black); 
    axisX->setGridLineVisible(true);
    axisY->setGridLineVisible(true);

    ui.graphicsView->setChart(chart);
    ui.graphicsView->setRenderHint(QPainter::Antialiasing);

    connect(ui.MeasureButton, &QPushButton::clicked, this, &PulseOximeterSimulator::Measuring);
    connect(ui.ChangeSubButton, &QPushButton::clicked, this, &PulseOximeterSimulator::ChangePatient);
    connect(measurementTimer, &QTimer::timeout, this, &PulseOximeterSimulator::updateMeasurement);
}


PulseOximeterSimulator::~PulseOximeterSimulator()

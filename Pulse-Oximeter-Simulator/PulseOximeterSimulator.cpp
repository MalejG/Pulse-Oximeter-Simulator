#include "PulseOximeterSimulator.h"
#include "Process.h"

Process proces;

PulseOximeterSimulator::PulseOximeterSimulator(QWidget* parent)
    : QMainWindow(parent), measurementTimer(new QTimer(this)), timeCounter(0), beatsPerMinute(60), samplesPerBeat(100), samplesCount(0)
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
{
    delete chart;
    delete series;
    delete measurementTimer;
}

void PulseOximeterSimulator::Measuring()
{
    measurementTimer->start(100);
}


void PulseOximeterSimulator::ChangePatient()
{
    proces.changePatient();
}



void PulseOximeterSimulator::updateMeasurement()
{
    proces.measure();
    ui.SpOData->setText(QString::number(proces.getOxygenSaturationMeasure(), 'f', 0));
    ui.PRbpmData->setText(QString::number((proces.getHeartRateMeasure()), 'f', 0));
    ui.SpOBar->setValue(proces.getOxygenSaturationMeasure());

    double time = timeCounter / 10.0;
    double peakInterval = 60 / proces.getHeartRateMeasure(); 
    double value = 0.0;


    if (fmod(time, peakInterval) < 0.1) {
        value = 1.0;
    }
    else {
        value = 0.0;
    }

    series->append(time, value);

    double currentTime = timeCounter / 10.0;
    while (!series->points().isEmpty() && series->points().first().x() < currentTime - 10) {
        series->remove(0);
    }

    axisX->setRange(currentTime - 10, currentTime);

    timeCounter++;
}
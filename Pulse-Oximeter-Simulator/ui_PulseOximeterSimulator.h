/********************************************************************************
** Form generated from reading UI file 'PulseOximeterSimulatorxxtWmy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PULSEOXIMETERSIMULATORXXTWMY_H
#define PULSEOXIMETERSIMULATORXXTWMY_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PulseOximeterSimulatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *MeasureButton;
    QPushButton *ChangeSubButton;
    QLabel *PRbpmTxt;
    QLabel *PRbpmData;
    QProgressBar *SpOBar;
    QLabel *SpOTxt;
    QLabel *SpOData;
    QChartView *graphicsView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PulseOximeterSimulatorClass)
    {
        if (PulseOximeterSimulatorClass->objectName().isEmpty())
            PulseOximeterSimulatorClass->setObjectName("PulseOximeterSimulatorClass");
        PulseOximeterSimulatorClass->resize(434, 163);
        centralWidget = new QWidget(PulseOximeterSimulatorClass);
        centralWidget->setObjectName("centralWidget");
        MeasureButton = new QPushButton(centralWidget);
        MeasureButton->setObjectName("MeasureButton");
        MeasureButton->setGeometry(QRect(290, 70, 111, 31));
        ChangeSubButton = new QPushButton(centralWidget);
        ChangeSubButton->setObjectName("ChangeSubButton");
        ChangeSubButton->setGeometry(QRect(290, 30, 111, 31));
        PRbpmTxt = new QLabel(centralWidget);
        PRbpmTxt->setObjectName("PRbpmTxt");
        PRbpmTxt->setGeometry(QRect(20, 60, 49, 31));
        PRbpmTxt->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PRbpmData = new QLabel(centralWidget);
        PRbpmData->setObjectName("PRbpmData");
        PRbpmData->setGeometry(QRect(40, 85, 51, 21));
        QFont font;
        font.setPointSize(12);
        PRbpmData->setFont(font);
        SpOBar = new QProgressBar(centralWidget);
        SpOBar->setObjectName("SpOBar");
        SpOBar->setGeometry(QRect(70, 26, 181, 20));
        SpOBar->setFont(font);
        SpOBar->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        SpOBar->setMinimum(70);
        SpOBar->setValue(95);
        SpOBar->setTextVisible(false);
        SpOTxt = new QLabel(centralWidget);
        SpOTxt->setObjectName("SpOTxt");
        SpOTxt->setGeometry(QRect(20, 10, 49, 31));
        SpOTxt->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SpOData = new QLabel(centralWidget);
        SpOData->setObjectName("SpOData");
        SpOData->setGeometry(QRect(40, 35, 51, 21));
        SpOData->setFont(font);
        graphicsView = new QChartView(centralWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(70, 50, 181, 91));
        PulseOximeterSimulatorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PulseOximeterSimulatorClass);
        statusBar->setObjectName("statusBar");
        PulseOximeterSimulatorClass->setStatusBar(statusBar);

        retranslateUi(PulseOximeterSimulatorClass);

        QMetaObject::connectSlotsByName(PulseOximeterSimulatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *PulseOximeterSimulatorClass)
    {
        PulseOximeterSimulatorClass->setWindowTitle(QCoreApplication::translate("PulseOximeterSimulatorClass", "PulseOximeterSimulator", nullptr));
        MeasureButton->setText(QCoreApplication::translate("PulseOximeterSimulatorClass", "Measure", nullptr));
        ChangeSubButton->setText(QCoreApplication::translate("PulseOximeterSimulatorClass", "Change Subject", nullptr));
        PRbpmTxt->setText(QCoreApplication::translate("PulseOximeterSimulatorClass", "PR bpm", nullptr));
        PRbpmData->setText(QCoreApplication::translate("PulseOximeterSimulatorClass", "65", nullptr));
        SpOBar->setFormat(QCoreApplication::translate("PulseOximeterSimulatorClass", "%p", nullptr));
        SpOTxt->setText(QCoreApplication::translate("PulseOximeterSimulatorClass", "%SpO2", nullptr));
        SpOData->setText(QCoreApplication::translate("PulseOximeterSimulatorClass", "94", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PulseOximeterSimulatorClass: public Ui_PulseOximeterSimulatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PULSEOXIMETERSIMULATORXXTWMY_H

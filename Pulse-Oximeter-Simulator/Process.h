#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 
#include <cctype>
#include <fstream>

#include "PatientFinger.h"

using namespace std;

class Process
{
public:
	Process();
	float getOxygenSaturationMeasure() const;
	float getHeartRateMeasure() const;

	void setPatients();
	PatientFinger& getPatient();
	void changePatient();
	void measure();
private:
	float m_OxygenSaturation;
	float m_HeartRateMeasure;
	std::vector<PatientFinger> m_patients;
	int m_currentPatient;
};


#include "Process.h"


Process::Process() : m_currentPatient(0)
{
	srand((unsigned)time(nullptr));
	setPatients();
}

float Process::getOxygenSaturationMeasure() const
{
	return m_OxygenSaturation;
}

float Process::getHeartRateMeasure() const
{
	return m_HeartRateMeasure;
}

void Process::setPatients()
{
	m_patients.push_back(PatientFinger(0.97f, 0.93f, 1.f));
	m_patients.push_back(PatientFinger(1.f, 1.f, 1.4f));
	m_patients.push_back(PatientFinger(0.98f, 0.82f, 0.7f));


}

PatientFinger& Process::getPatient()
{
	return m_patients[m_currentPatient];
}

void Process::changePatient()
{
	m_currentPatient = (m_currentPatient + 1) % m_patients.size();
}

void Process::measure()
{
	float randomModifier = (std::rand() / static_cast<float>(RAND_MAX)) * 0.02 + 0.985;
	m_OxygenSaturation = getPatient().getAbsorbtionR()/ getPatient().getAbsorbtionIR() * randomModifier * 100;
	float randomModifiero = (std::rand() / static_cast<float>(RAND_MAX)) * 0.01 + 0.99;
	m_HeartRateMeasure = getPatient().getBeatRate() * randomModifiero * 100;
}

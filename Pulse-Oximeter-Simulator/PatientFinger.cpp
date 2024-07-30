#include "PatientFinger.h"



PatientFinger::PatientFinger(float abIR, float abR, float BR)
	: m_absorbtionIR{ abIR }
	, m_absorbtionR{ abR }
	, m_beatRate{ BR }
{
}

float PatientFinger::getAbsorbtionIR() const
{
	return m_absorbtionIR;
}

float PatientFinger::getAbsorbtionR() const
{
	return m_absorbtionR;
}

float PatientFinger::getBeatRate() const
{
	return m_beatRate;
}

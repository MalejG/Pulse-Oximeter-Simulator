#pragma once
class PatientFinger
{
public:
	PatientFinger(float abIR, float abR, float BR);

	float getAbsorbtionIR() const;
	float getAbsorbtionR() const;
	float getBeatRate() const;
	
private:
	float m_absorbtionIR;
	float m_absorbtionR;
	float m_beatRate;
};


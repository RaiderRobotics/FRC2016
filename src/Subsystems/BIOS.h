#ifndef BIOS_H
#define BIOS_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BIOS: public Subsystem
{
private:
	CANTalon* pCollectorMotor;
	CANTalon* pShooterMotorLeft;
	CANTalon* pShooterMotorRight;
	Timer* pTimer;
public:
	BIOS();
	void Intake(float speed);
	void Shoot(float speed);
	void LowGoal();
	void StartTimer();
	double GetCurrentTime();
	void StopTimer();
	void InitDefaultCommand();
};

#endif

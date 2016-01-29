#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	RobotDrive* robot;
public:
	DriveTrain();
	void InitDefaultCommand();
	void Drive(Joystick* stick);
	int EncoderValLeft();
	int EncoderValRight();
	CANTalon* leftMotor1;
	CANTalon* leftMotor2;
	CANTalon* rightMotor1;
	CANTalon* rightMotor2;
};

#endif

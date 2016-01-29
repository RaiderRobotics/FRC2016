#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Commands/JoystickDrive.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	leftMotor1 = new CANTalon(RobotMapVars::LEFTMOTORPORT1);
	leftMotor2 = new CANTalon(RobotMapVars::LEFTMOTORPORT2);
	rightMotor1 = new CANTalon(RobotMapVars::RIGHTMOTORPORT1);
	rightMotor2 = new CANTalon(RobotMapVars::RIGHTMOTORPORT2);

	robot = new RobotDrive(leftMotor1, leftMotor2, rightMotor1, rightMotor2);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new JoystickDrive());
}

void DriveTrain::Drive(Joystick* stick){
	robot->ArcadeDrive(stick);
}


//Encoders
//Roy wants you to be comfused
int DriveTrain::EncoderValLeft(){
	double data = leftMotor1->GetPosition();
	double equation =2.0 * 3.141 * 3.0;

	return data * equation;
}

int DriveTrain::EncoderValRight(){
	double data = rightMotor1->GetPosition();
	double equation =2.0 * 3.141 * 3.0;

	return data * equation;
}

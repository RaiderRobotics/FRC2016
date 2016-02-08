#include "BIOS.h"
#include "../RobotMap.h"

BIOS::BIOS() :
		Subsystem("BIOS")
{
	pCollectorMotor = new CANTalon(TALON_COLLECTOR);
	pShooterMotorRight = new CANTalon(TALON_RIGHT_SHOOTER);
	pShooterMotorLeft = new CANTalon(TALON_LEFT_SHOOTER);
	pTimer = new Timer;
}

void BIOS::Intake(float speed)
{
	pCollectorMotor->Set(speed);
}

void BIOS::Shoot(float speed)
{
	pShooterMotorRight->Set(speed);
	pShooterMotorLeft->Set(speed);
}

void BIOS::LowGoal()
{
	pCollectorMotor->Set(-0.75);
}

void BIOS::StartTimer()
{
	pTimer->Start();
}

double BIOS::GetCurrentTime()
{
	return pTimer->Get();
}

void BIOS::StopTimer()
{
	pTimer->Stop();
	pTimer->Reset();
}

void BIOS::InitDefaultCommand()
{

}

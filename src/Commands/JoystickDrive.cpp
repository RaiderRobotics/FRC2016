#include "JoystickDrive.h"
#

JoystickDrive::JoystickDrive()
{
	Requires(CommandBase::drivetrain);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassiss);
}

// Called just before this Command runs the first time
void JoystickDrive::Initialize()
{
	CommandBase::drivetrain->leftMotor1->SetFeedbackDevice(CANTalon::QuadEncoder);
	CommandBase::drivetrain->rightMotor1->SetFeedbackDevice(CANTalon::QuadEncoder);

	//reset encoder reading
	CommandBase::drivetrain->leftMotor1->SetPosition(0.0);
	CommandBase::drivetrain->rightMotor1->SetPosition(0.0);
	//TODO: try CommandBase::drivetrain->rightMotor1->Reset();

	//Ticks per revolution
	CommandBase::drivetrain->leftMotor1->ConfigEncoderCodesPerRev(2048);
	CommandBase::drivetrain->rightMotor1->ConfigEncoderCodesPerRev(2048);
}

// Called repeatedly when this Command is scheduled to run
void JoystickDrive::Execute()
{
	CommandBase::drivetrain->Drive(CommandBase::oi->stick);
	SmartDashboard::PutNumber("Left Encoder Distance (inches)", CommandBase::drivetrain->EncoderValLeft());
	SmartDashboard::PutNumber("right Encoder Distance(inches)", CommandBase::drivetrain->EncoderValRight());
}

// Make this return true when this Command no longer needs to run execute()
bool JoystickDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void JoystickDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void JoystickDrive::Interrupted()
{

}

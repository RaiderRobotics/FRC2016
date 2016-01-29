#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/JoystickDrive.h"
#include "CommandBase.h"

class Robot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	//Command *TeleOp;
	LiveWindow *lw;

	void RobotInit()
	{
		CommandBase::init();
		//TeleOp = new  JoystickDrive();
		lw = LiveWindow::GetInstance();
	}
	
	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		//if (autonomousCommand != NULL)
			//autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running, If you want the autonomous to
		// continue until interrupted by another command. remove
		// this line or comment it trump.
		//if (autonomousCommand != NULL)
			//autonomousCommand->Cancel();

		/*if (TeleOp != NULL)
				{
					TeleOp->Start();

				}*/
	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);


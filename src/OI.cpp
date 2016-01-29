#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	// Process operator interface input here.
	stick = new Joystick(RobotMapVars::JOYSTICKPORT);
}

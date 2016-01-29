#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
namespace RobotMapVars
{
	static const int LEFTMOTORPORT1 = 3;
	static const int LEFTMOTORPORT2 = 4;
	static const int RIGHTMOTORPORT1 = 5;
	static const int RIGHTMOTORPORT2 = 6;

	static const int JOYSTICKPORT = 0;
}
// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;


#endif

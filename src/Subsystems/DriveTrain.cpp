/*
 * DriveTrain.cpp
 *
 *  Created on: Oct 4, 2016
 *      Author: nidhi
 */

#include <Subsystems/DriveTrain.h>

namespace wvrobotics {

DriveTrain::DriveTrain(): Subsystem("DriveTrain"),
								driveMotor(new Jaguar(PORT)),
								ultrasonicsensor(new Ultrasonic(TRIGGERPORT, ECHOPORT))
{
	// TODO Auto-generated constructor stub
	ultrasonicsensor->SetAutomaticMode(true);

}

DriveTrain::~DriveTrain() {
	// TODO Auto-generated destructor stub
}

 /* namespace wvrobotics */


double DriveTrain::getUltra()
{
	return ultrasonicsensor->GetRangeInches();
}

}

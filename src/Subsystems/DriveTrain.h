/*
 * DriveTrain.h
 *
 *  Created on: Oct 4, 2016
 *      Author: nidhi
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_
#include "WPILib.h"
namespace wvrobotics {

class DriveTrain {
private:
	Jaguar* driveMotor;
	Ultrasonic* ultrasonicsensor;
public:
	DriveTrain();
	virtual ~DriveTrain();
	double getUltra();

};

} /* namespace wvrobotics */

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */

#include "MoveUntilWall.h"


MoveUntilWall::MoveUntilWall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(DriveTrain);
	distanceToTravel = 5;

}

// Called just before this Command runs the first time
void MoveUntilWall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveUntilWall::Execute()
{
	drive->driveMotor->setSpeed(0.4);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUntilWall::IsFinished()
{
	if(drive->getUltra() < distanceToTravel)
	{
		return true;
	}
	return false;
}

// Called once after isFinished returns true
void MoveUntilWall::End()
{
	drive->driveMotor->StopMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUntilWall::Interrupted()
{

}

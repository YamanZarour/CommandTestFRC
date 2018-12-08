/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TankDriveJoystick.h"
#include "RobotMap.h"
#include "../OI.h"
#include "../Robot.h"
#include "../Subsystems/DriveTrain.h"
#include <iostream>

using namespace std;



TankDriveJoystick::TankDriveJoystick()
{
	Requires(&Robot::m_drivetrain);
}

void TankDriveJoystick::Initialize() {

}
void TankDriveJoystick::Execute()
{
	Robot::m_drivetrain.Drivebot(Robot::m_oi->rightJoystick(), Robot::m_oi->leftJoystick());

}
bool TankDriveJoystick::IsFinished()
{
	return false;
}
void TankDriveJoystick::End()
{
	Robot::m_drivetrain.Drivebot(0, 0);
}
void TankDriveJoystick::Interrupted()
{
	End();
}

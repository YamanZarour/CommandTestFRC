/*
 * DriveTrain.cpp
 *
 *  Created on: Nov 16, 2018
 *      Author: lenovo i5 2
 */

#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Robot.h"
#include <iostream>
#include "../Commands/TankDriveJoystick.h"
using namespace std;

#include <SmartDashboard/SmartDashboard.h>

DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain")
{
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new TankDriveJoystick() );
}

void DriveTrain::Drivebot(float joyLeft,float joyRight)
{
	Drive.TankDrive(joyLeft, joyRight);
}




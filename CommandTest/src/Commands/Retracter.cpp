/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Retracter.h"
#include "../Robot.h"
#include "../Subsystems/Lanceur.h"
#include <iostream>
#include <SmartDashboard/SmartDashboard.h>

using namespace std;

Retracter::Retracter()
{
	Requires(&Robot::m_piston);
}


// Called just before this Command runs the first time
void Retracter::Initialize()
{
	SetInterruptible(false);
}

// Called repeatedly when this Command is scheduled to run
void Retracter::Execute()
{
	Robot::m_piston.RetracterPiston();
}

// Make this return true when this Command no longer needs to run execute()
bool Retracter::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void Retracter::End() {
	Robot::m_piston.pulseTime = 0;
	frc::SmartDashboard::PutNumber("Charge Gauge", 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Retracter::Interrupted() {

}

/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ChargePiston.h"
#include <iostream>
#include <math.h>
#include <SmartDashboard/SmartDashboard.h>
using namespace std;

ChargePiston::ChargePiston() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::m_piston);
	Robot::m_piston.pulseTime = 0;
}

// Called just before this Command runs the first time
void ChargePiston::Initialize() {
	Robot::m_piston.pulseTime = 0;
	timer.Reset();
	timer.Start();
	oldTime = 0;
}

// Called repeatedly when this Command is scheduled to run
void ChargePiston::Execute() {
	frc::SmartDashboard::PutNumber("Charge Gauge", Robot::m_piston.pulseTime);
	if (timer.Get() == 0)
	{
		timer.Start();
		Robot::m_piston.pulseTime = 0;
	}
	deltaTime = timer.Get() - oldTime;
	oldTime = timer.Get();
	Robot::m_piston.pulseTime += deltaTime;
}

// Make this return true when this Command no longer needs to run execute()
bool ChargePiston::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ChargePiston::End()
{
	Robot::m_piston.pulseTime = min(max(double(0.2), Robot::m_piston.pulseTime), double(2));
	timer.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChargePiston::Interrupted() {


}

/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Lancer.h"
#include "../Robot.h"
#include "../Subsystems/Lanceur.h"
#include <iostream>

using namespace std;

Lancer::Lancer()
{
	Requires(&Robot::m_piston);
}

// Called just before this Command runs the first time
void Lancer::Initialize()
{
	SetInterruptible(false);
}

// Called repeatedly when this Command is scheduled to run
void Lancer::Execute()
{
	Robot::m_piston.ActiverPiston();
}

// Make this return true when this Command no longer needs to run execute()
bool Lancer::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void Lancer::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Lancer::Interrupted() {

}

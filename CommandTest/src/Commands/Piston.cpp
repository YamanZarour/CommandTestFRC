/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Piston.h"
#include "../Robot.h"
#include "../Subsystems/Lanceur.h"
#include <iostream>
using namespace std;


Piston::Piston()
{
	Requires(&Robot::m_piston);
	SetInterruptible(false);
	Robot::m_piston.pulseTime = 0;
	AddSequential(new Lancer());
	AddSequential(new Pause(0.2));
	AddSequential(new Retracter());
	AddSequential(new Pause(2));
	Robot::m_piston.pulseTime = 0;
}

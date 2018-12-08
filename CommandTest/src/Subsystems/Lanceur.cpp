/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Lanceur.h"
#include "../RobotMap.h"
#include "../Commands/Lancer.h"
#include <iostream>
#include <WPILib.h>

Lanceur::Lanceur() : Subsystem("Lanceur")
{

}

void Lanceur::ActiverPiston()
{
	actPiston.SetPulseDuration(pulseTime);
	actPiston.StartPulse();
}

void Lanceur::RetracterPiston()
{
	retPiston.SetPulseDuration(pulseTime);
	retPiston.StartPulse();
}

void Lanceur::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

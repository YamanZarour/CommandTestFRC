/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <Solenoid.h>

class Lanceur : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	// Solenoids pour activer et retracter le piston
	Solenoid actPiston {6};
	Solenoid retPiston {7};

public:
	Lanceur();
	double pulseTime;
	void ActiverPiston();
	void RetracterPiston();
	void InitDefaultCommand() override;
};


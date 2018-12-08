/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "Robot.h"
#include "Commands/Piston.h"
#include "Commands/Retracter.h"
#include "Commands/ChargePiston.h"
#include <WPILib.h>
#include <math.h>

using namespace std;



OI::OI()
{
	joystick0  = new Joystick(0);
	joystick1 = new Joystick(1);
	boutonLanceur = new JoystickButton(joystick0,1);
	boutonLanceur->WhileHeld(new ChargePiston());
	boutonLanceur->WhenReleased(new Piston());

}

double OI::leftJoystick()
{
	if (isUsingManette())
		return -joystick0->GetRawAxis(3);
	else
		return -joystick1->GetY();
}

double OI::rightJoystick()
{
	if (isUsingManette())
		return -joystick0->GetRawAxis(1);
	else
		return -joystick0->GetY();
}

bool OI::isUsingManette()
{
	return true;
	bool* temp = Robot::joystick_chooser.GetSelected();
	cout<<*temp<<endl;
	return *temp;
}


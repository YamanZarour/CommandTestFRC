/*
 * DriveTrain.h
 *
 *  Created on: Nov 16, 2018
 *      Author: lenovo i5 2
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

#include <Commands/Subsystem.h>
#include "C:\Users\lenovo i5 2\wpilib\user\cpp\include\ctre\Phoenix.h"
#include "C:\Users\lenovo i5 2\wpilib\cpp\current\include\Drive\DifferentialDrive.h"
#include "C:\Users\lenovo i5 2\wpilib\user\cpp\include\ctre\phoenix\MotorControl\CAN\WPI_TalonSRX.h"
#include <SpeedController.h>
#include <SpeedControllerGroup.h>

class DriveTrain : public frc::Subsystem
{
	public :
		DriveTrain();
		void InitDefaultCommand();
		void Drivebot (float joyRight, float joyLeft);

	private:
		WPI_TalonSRX motor0{0};
		WPI_TalonSRX motor1{1};
		WPI_TalonSRX motor2{2};
		WPI_TalonSRX motor3{3};

		frc::SpeedControllerGroup leftSide{motor0, motor1};
		frc::SpeedControllerGroup rightSide{motor2, motor3};

		DifferentialDrive Drive{leftSide, rightSide};



};




#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */

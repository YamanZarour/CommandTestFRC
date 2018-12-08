################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/ExampleCommand.cpp \
../src/Commands/MyAutoCommand.cpp \
../src/Commands/TankDriveJoystick.cpp 

OBJS += \
./src/Commands/ExampleCommand.o \
./src/Commands/MyAutoCommand.o \
./src/Commands/TankDriveJoystick.o 

CPP_DEPS += \
./src/Commands/ExampleCommand.d \
./src/Commands/MyAutoCommand.d \
./src/Commands/TankDriveJoystick.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -I"C:\Users\lenovo i5 2\Desktop\secret\eclipse-workspace-stan\CommandTest/src" -IC:\Users\lenovo i5 2/wpilib/simulation/include -I/usr/include -I/usr/include/gazebo-6.5 -I/usr/include/ignition/math2 -I/usr/include/sdformat-3.7 -O0 -Og -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



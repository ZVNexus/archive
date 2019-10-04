#pragma config(Sensor, dgtl1,  red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl2,  green,          sensorLEDtoVCC)
#pragma config(Sensor, dgtl3,  touch,          sensorTouch)
#pragma config(Sensor, dgtl4,  sonar,          sensorSONAR_cm)
#pragma config(Motor,  port2,           belt2,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           belt3,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           belt1,         tmotorVex393_MC29, openLoop, reversed)

/*
Alexander James Koskovich I
11/3/17
Period 3
*/

task main()
{
	while (1==1)
	{
		untilBump (touch);
		startMotor (belt1, 70);
		turnLEDOn (green);
		waitUntil (SensorValue[sonar]<=15);
		stopMotor (belt1);
		wait (1.5);
		turnLEDOff (green);
		startMotor (belt3, 70);
		wait (3);
		turnLEDOn (red);
		stopMotor (belt3);
		startMotor (belt2, 70);
		wait (1.5);
		stopMotor (belt2);
	}
}

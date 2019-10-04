#pragma config(Sensor, dgtl1,  coldwar,        sensorSONAR_cm)
#pragma config(Sensor, dgtl11, emerald,          sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, crimson,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)

/*
Alexander James Koskovich
10/2/17
Period 3
*/

task main()
{
	while (1==1)
	{
		if (SensorValue[coldwar]>=20)
		{
			turnLEDOff (crimson);
			turnLEDOn (emerald);
			startMotor (leftMotor, 80);
			startMotor (rightMotor, 127);
			wait (2);
		}
		else
		{
			turnLEDOn (crimson);
			turnLEDOff (emerald);
			stopMotor (leftMotor);
			stopMotor (rightMotor);
		}
	}
}

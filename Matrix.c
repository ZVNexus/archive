#pragma config(Sensor, dgtl1,  coldwar,        sensorSONAR_cm)
#pragma config(Sensor, dgtl11, green,          sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, red,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)

/*Alexander James Koskovich I
Period 3
9/26/17
*/

int Matrix = 127;

task main()
{
	while
	{
		if (1==1)
		{
			startMotor (leftMotor, 80);
			startMotor (rightMotor, Matrix);
		}
		else
		{
			stopMotor (leftMotor);
			stopMotor (rightMotor);
		}
	}
}

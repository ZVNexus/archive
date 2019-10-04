#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)

/*Alexander James Koskovich I
Period 3
9/26/17
*/

int speed = 100;
int count = 0;

task main()
{
	while (count<=5)
	{
		startMotor (leftMotor, speed);
		startMotor (rightMotor, speed);
		wait (2);

		stopMotor (leftMotor);
		stopMotor (rightMotor);
		wait (1);

		count = count + 1;
	}
}

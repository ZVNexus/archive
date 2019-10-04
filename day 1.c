#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)

/*Alexander James Koskovich I
Period 3
9/18/17
*/

task main()
{
	startMotor (leftMotor, 127);
	startMotor (rightMotor, 127);
		//Starts left & right motors at 50 power//
	wait (3.14159265);
		//Waits for pie to be delivered//
	stopMotor (leftMotor);
	stopMotor (rightMotor);
		//Stops after eating pie//
}

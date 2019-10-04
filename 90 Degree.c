#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)

/*Alexander James Koskovich I
Period 3
9/20/17

~~~~~|CONCLUSION QUESTIONS|~~~~~
1.)The parameters for my first "startMotor" function were (leftMotor, 80).

2.)I figured out how to get my robot to turn by using the stopMotor function to stop my left motor from running,
so it was only my right motor still spinning which made it so that it turned. One of the issues I ran into while
trying to figure out how to make the turn was the specific time I needed make a 90 degree turn.
I eventually settled on 0.85 seconds as that gave me optimal results.
If I were to give an estimate on how many times I had to redownload and retest the program it was be probaly
15-20 times. Most of these changes just had to do with time, and getting my left motor to match the right motor's
speeds.
*/

task main()
{
	while (1==1)
	{
	startMotor (leftMotor, 80);
	startMotor (rightMotor, 127);
	wait (2);
	//Goes forward for 2 seconds

	stopMotor (leftMotor);
	wait (0.85);
	//Turns

	stopMotor (rightMotor);
	//Stops
	}
}
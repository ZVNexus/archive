#pragma config(Sensor, dgtl3,  TOUCH,          sensorTouch)
#pragma config(Sensor, dgtl11, emerald,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, crimson,        sensorLEDtoVCC)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)



/*
Alexander Koskovich II
10/12/17
Period 3

1.) In a nutshell, this program is going to, when the button has been pressed that we attached to the robot, the robot will turn
on both of its motors, and then the LED we have attached to the ports on the board will shine emerald. When the button that we
have attached to the robot is not being pressed however, the robot will remain off, and the red LED will come on to show that else
statement has been triggered since no button is being pressed.

2.) The purpose of the always true while loop is to ensure that we can repeat the program as many times as we like.
If the while loop was not there, the if/else statement would only run once and that would be it. If you wanted to run it multiple
times without the while loop you would have to turn on and off the robot multiple times. The while loop makes this a non-issue.
*/

task main()
{
	while (1==1)
	{
		if (SensorValue[TOUCH]==1)
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

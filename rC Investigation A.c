#pragma config(Sensor, dgtl1,  bumperSwitch,   sensorTouch)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex269_HBridge, openLoop)

/*
Alexander James Koskovich I
10/19/17
3

1.What happens when the program starts before a human interferes is it
OBSERVATIONS is waiting until it has been bumped. Until it has been bumped it
does nothing.
2.Once the button has been pressed, the leftMotor turns on for 1 second, at full speed.
3.The program is never finised because it is in a while loop, so the program is always running, waiting for the button to be pressed.

CONCLUSION QUESTIONS
1.The hardest part in solving this challenge was was that sometimes the robot would skip commands that were sent to it, such as stop,
which is not good. In order to resolve this issue, we had to change our bumperSwitch from an analog port on the board to a digital port.
The reason why it wasn't on the digital port to begin with was because we thought there was an issue with the digital ports since it wasn't
working when we first tested everything. We now see that issue was most likely not related, but something else we fixed without realizing.

2.) The untilBump function is advantageous as a programmer because it is easier to do things in steps, for example if you wanted to run at half power, then full then stop,
you would only need to type them out then just put an untilBump between all of the steps. With if else, if you wanted to do that you would
need to have your program be overly complex. We don't use wait for this because wait has a specified time. untilBump will continue its function until it is told otherwise.

3.) The disadvantages of using untilBump is you may not be able to be as specific in what you want the program to do. With a while + if + else
program you can achieve much more in terms of complexity.

4.) The only thing that was confusing was the digital port because it originally didn't work. I observed no one else had this issue, so it was just something I did wrong.


*/

task main()
{
	while (1==1)
	{
		untilBump(bumperSwitch);
		startMotor(leftMotor, 63.5);
		untilBump (bumperSwitch);
		startMotor (leftMotor, 127);
		untilBump (bumperSwitch);
		startMotor(leftMotor, 0);
	}
}

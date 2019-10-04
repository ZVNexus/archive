#pragma config(Sensor, in1,    light,          sensorReflection)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)

/*
Alexander James Koskovich I
10/30/17
Period 3

Observations:
1.) The light value before the machine is operated around an average of 150.

2.)The range of values for the light sensor are 0-4095 from what I have gathered.

3.)What happens when you cover the light sensor is the value greatly increases. However, I have gathered that when you cover it with say, your thumb, a little light gets through as opposed to
covering it with a thick jacket or something akin to that.

4.)The waitUntil function does exactly what it sounds like. It waits until a variable obtains a specific value, and then proceeds to move on to the next part of the program.

Conclusion Questions:
1.)The hardest part in solving this challenge was figuring out that instead of using the untilBump statement, an if-else statement would be more effective. Changed untilBump to if else.

2.)I chose if else because my program required it. For example, my program needed to turn on light when door opened, and turn off when it closed. So most logical solution would be if the light
value was above a certain number, execute this task. If not, do that.

3.)A practical use for the light sensor is in the cookie cutter line, so when going through the assembly line, when the cookie gets to the middle it will trigger the light sensor and be pushed
away into a cart.

4.)Nothing about this activity was confusing or unclear.
*/

task main()
{
	while (1==1)
	{
		if (SensorValue[light]<500)
		turnFlashlightOn(flashlight, 127);
		else
		turnFlashlightOff(flashlight);
	}
}

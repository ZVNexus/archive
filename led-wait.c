#pragma config(Sensor, dgtl11, red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)

/*
Alexander James Koskovich
11/20/17
Sub Routine Practice
Period 3
*/

task greenBlink ()
{
	while (1==1)
	{
		turnLEDOn (green);
		wait (0.5);
		turnLEDOff (green);
		wait (0.5);
	}
}

task redBlink ()
{
	while (1==1)
	{
		turnLEDOn (red);
		wait (0.5);
		turnLEDOff (red);
		wait (0.5);
	}
}

task main()
{
	startTask (greenBlink);
	startTask (redBlink);

	while (1==1)
	{
		wait1Msec (1);
	}
}

#pragma config(Sensor, in1,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl10, red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yellow,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           servo,         tmotorServoStandard, openLoop)
/*
Alexander James Koskovich I
10/23/17
Period 3

Observations:
1.)What happended before a human interfered, was nothing observable.

2.)The range of values for the potentiometer was 0-4095

3.)Once the limitSwitch was pressed the servo activated & the red LED turned on.

4.)When the limitSwitch and the potentiometer were pressed at same time, you were to control the servo. Also, red & yellow LED turn on.

5.)The potentiometer value at which servo the moves is 1500.

6.)The program is never finished because its always waiting for while (SensorValue[limitSwitch]==1) to be true.

Conclusion Questions:
1.)The hardest part in solving this challenge was psuedocode. Took us (or just me maybe) to figure that out. I finnaly realized that the 	else if(SensorValue[potentiometer]>=x && SensorValue[potentiometer]<=x)line wasn't just for less than and greater than
you could also have a range of numbers.

2.)The else if could be advantageous to a programmer if he or she wanted to have a lot of variables. For example, if this is true, do this. If it is not true, if x = x do this, if x=x do that, etc.

3.)The negatives/drawbacks this could have to a programmer are that it sometimes can't be as specific as it needs to.

4.)The only thing about this activity that a tad confusing and maybe a bit unclear was the else if part included in the psuedocode. I am good now though.
*/

task main()
{
	while (1==1)
	{
		turnLEDOff(green);
		turnLEDOff(yellow);
		turnLEDOff(red);

		while (SensorValue[limitSwitch]==1)
		{
			if (SensorValue[potentiometer]<800)
			{
				setServo(servo, -127);
				turnLEDOn(red);
			}
			else if(SensorValue[potentiometer]>=800 && SensorValue[potentiometer]<=1600)
			{
				setServo(servo, -63);
				turnLEDOn(yellow);
			}
			else if(SensorValue[potentiometer]>=1600 && SensorValue[potentiometer]<=2400)
			{
				setServo (servo, 0);
				turnLEDOn (yellow);
			}
			else if(SensorValue[potentiometer]>=2400 && SensorValue[potentiometer]<=3200)
			{
				setServo (servo, 63);
				turnLEDOn (yellow);
			}
			else if(SensorValue[potentiometer]>=3200)
			{
				setServo(servo, 127);
				turnLEDOn(green);
			}
			else if(SensorValue[servo]>0)
			{
				turnLEDOn (green);
			}
			else if(SensorValue[servo]<0)
			{
				turnLEDOn (red);
			}
			else if(SensorValue[servo]==0)
			{
				turnLEDOn (yellow);
			}
		}
	}
}

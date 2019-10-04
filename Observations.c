#pragma config(Sensor, dgtl1,  bottomBump,     sensorTouch)
#pragma config(Sensor, dgtl2,  topBump,        sensorTouch)
#pragma config(Sensor, dgtl3,  bottomEncoder,  sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  topEncoder,     sensorQuadEncoder)
#pragma config(Motor,  port1,           bottomMotor,   tmotorVex269_HBridge, openLoop)
#pragma config(Motor,  port10,          topMotor,      tmotorVex269_HBridge, openLoop)

/*
Alexander James Koskovich I
10/16/17
Period 3

Observations:
1.)Before a human interferes, the robot does nada.

2.)	The range of values is 0-5800.

3.)When you press the bottom sensor, the motors will turn on and spin until the shaft encoder reaches 5000

4.)When you press the top sensor, the top encoder shaft runs.	It stops at 5000.

5.)The purpose is to say, when these two variables are zero, start program.
Conclusion Questions:
1.)The hardest part of solving this challenge was trying to find the exact value for the shaft encoder to have it spin a full 360 degrees. Spent the longest time trying to find the value.
I eventually figured out that used angles. 360 degrees, 720 degrees, 1080, etc. Changed the 	untilEncoderCounts(5000,bottomEncoder); to 	untilEncoderCounts(360,bottomEncoder);.

2.)The top encoder value for one full rotation was 360.

3.)The bottom encoder value for one full rotation was also, 360.

4.)The gear ratio made it harder for the top one to move.

5.)Why 360 degrees worked for both the top & bottom encoder.	I thought they should have been different, but they were not.
*/

task main()
{
	while(1==1)
	{
		SensorValue[bottomEncoder]=0;
		SensorValue[topEncoder]=0;

		if (SensorValue[bottomBump]==1)
		{
			startMotor(bottomMotor, -15);
			untilEncoderCounts(360,bottomEncoder);
			stopMotor(bottomMotor);
			wait(5);
		}

		if (SensorValue[topBump]==1)
		{
			startMotor(topMotor, -15);
			untilEncoderCounts(360,topEncoder);
			stopMotor(topMotor);
			wait(5);
		}
	}
}

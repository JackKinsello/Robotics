#pragma config(Sensor, port4,  gyroSensor,     sensorVexIQ_Gyro)
#pragma config(Sensor, port8,  distanceSensor, sensorVexIQ_Distance)
#pragma config(Motor,  motor1,          leftDriveMotor, tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor3,          leftClawMotor, tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor7,          rightDriveMotor, tmotorVexIQ, PIDControl, reversed, driveRight, encoder)
#pragma config(Motor,  motor9,          rightClawMotor, tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor10,         middleDriveMotor, tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//10769D Wild Cards
task main()
{
	resetMotorEncoder(leftDriveMotor);
	resetMotorEncoder(rightDriveMotor);
	resetMotorEncoder(leftClawMotor);
	resetMotorEncoder(rightClawMotor);
	resetMotorEncoder(middleDriveMotor);

	repeat (forever) {
		displayMotorValues(line1, leftDriveMotor);
		displayMotorValues(line2, middleDriveMotor);
		displayMotorValues(line3, leftClawMotor);
		displaySensorValues(line4, gyroSensor);
		displaySensorValues(line5, distanceSensor);


		tankControl(ChD, ChA, 2);
		armControl(leftClawMotor, BtnLUp, BtnLDown, 50);
		armControl(rightClawMotor, BtnLUp, BtnLDown, 50);
		armControl(middleDriveMotor, BtnEUp, BtnEDown, 75);
		}
}

#include "motion_sensor.h"

MotionSensor::MotionSensor(string description, int phone)
{
	this->description = description;
	this->phone = phone;
}
MotionSensor::~MotionSensor()
{

}
void MotionSensor::setStatus()
{
	if (isActive == false)
	{
		isActive = true;
	}
	else if (isActive == true)
	{
		isActive = false;
	}
}
string MotionSensor::getStatus()
{
	if (isActive == false)
	{
		return "Garage is closed";
	}
	else if (isActive == true)
	{
		return "Garage is open";
	}
}
string MotionSensor::sendNotification()
{
	if (isActive == true && phone != -1)
	{
		string strPhone = to_string(phone);
		return "Garage was opened by " + strPhone;

	}
}
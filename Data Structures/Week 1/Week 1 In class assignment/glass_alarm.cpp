#include "glass_alarm.h"


GlassAlarm::GlassAlarm() {}
GlassAlarm::~GlassAlarm() {}

string GlassAlarm::getStatus()
{
	if (isActive == false)
	{
		return "Alarm is off";
	}
	else if (isActive == true)
	{
		return "Alarm is on";
	}
}
void GlassAlarm::setAlarm()
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
string GlassAlarm::armRooms(string rooms[]) 
{
	string result;
	for (int i = 0; i < sizeof(rooms); i++)
	{
		result += rooms[i];
	}

	return "Rooms armed: " + result;
}
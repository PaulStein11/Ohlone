#include "lights.h"


Lights::Lights(bool isWIFIConnected) 
{
	this->isWIFIConnected = isWIFIConnected;
}
Lights::~Lights() {}

string Lights::getStatus()
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
void Lights::setLights()
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
string Lights::getTotalLights(string rooms[])
{
	string result;
	for (int i = 0; i < sizeof(rooms); i++)
	{
		result += rooms[i];
	}

	return "Lights active: " + result;
}
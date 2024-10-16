#include "garage_door.h"

GarageDoor::GarageDoor(string description, int phone)
{
	this->description = description;
	this->phone = phone;
}
GarageDoor::~GarageDoor()
{

}
void GarageDoor::setStatus()
{
	if (isOpen == false)
	{
		isOpen = true;
	}
	else if (isOpen == true)
	{
		isOpen = false;
	}
}
string GarageDoor::getStatus()
{	
	if (isOpen == false)
	{
		return "Garage is closed";
	}
	else if (isOpen == true)
	{
		return "Garage is open";
	}
}
string GarageDoor::sendNotification()
{
	if (isOpen == true && phone != -1)
	{
		string strPhone = to_string(phone);
		return "Garage was opened by " + strPhone;

	}
}
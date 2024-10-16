#include "locker.h"

Locker::Locker(string description) 
{
	this->description = description;	
	
}
Locker::~Locker()
{

}

void Locker::setLocker()
{	
	// Sets the lcoker to be opened
	if (isActive == false)
	{
		isActive == true;
	}
}

string Locker::getStatus()
{	
	// Allows to check if the locker is open or close
	string status = "";
	if (isActive == false)
	{
		status = "closed";
	}
	else
	{
		status = "open";
	}
	return "Locker status is " + status;
}

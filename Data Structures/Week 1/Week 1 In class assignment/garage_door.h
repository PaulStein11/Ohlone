/*
	Description: Garage Door Control  is defined with the class GarageDoor
	Three arguments are define: description of the sensor, a default closed status 
	and a phone number.
	The methods are to set and get status of the sensor and to send a notification 
	every time the status changes.
*/
#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <string>

using namespace std;

class GarageDoor
{
public:
	GarageDoor(string description, int phone);
	~GarageDoor();
	void setStatus();
	string getStatus();
	string sendNotification();

private:
	string description;
	bool isOpen = false;
	int phone;

};

#endif // !GARAGEDOOR_H


#include "phone_alerts.h"

PhoneAlerts::PhoneAlerts(string name, int phone)
{
	this->name = name;
	this->phone = phone;

}
PhoneAlerts::~PhoneAlerts() {}
string PhoneAlerts::getNotifications()
{
	if (notificationAlert == true && phone != -1)
	{
		return name + ", you have a new notification from your Smart Home";
	}
}
void PhoneAlerts::setNotifications()
{
	if (notificationAlert == true)
	{
		notificationAlert = false;
	}
	else if (notificationAlert == false)
	{
		notificationAlert = true;
	}
}
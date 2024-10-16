/*
    Description: Smartphone Alerts is defined with the class PhoneAlerts
    Three arguments are define : username, phone number and a default notification status 
    The methods are to set and get notifications
*/

#ifndef PHONEALERT_H
#define PHONEALERT_H

#include <string>

using namespace std;

class PhoneAlerts
{
public:
    PhoneAlerts(string name, int phone);
    ~PhoneAlerts();
    string getNotifications();
    void setNotifications();

private:
    string name;
    int phone;
    bool notificationAlert = true;




};
#endif // !PHONEALERT_H
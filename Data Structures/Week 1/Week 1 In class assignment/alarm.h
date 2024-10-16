/*
    Description: Alarm and Siren Activation is defined with the class MainAlarm
    Two arguments are defined: a default deactivated status 
    and the alarm code to interact.
    The methods are to set the alarm and get status
*/

#ifndef ALARM_H
#define ALARM_H

#include <string>

using namespace std;

class MainAlarm
{
public:
    MainAlarm();
    ~MainAlarm();
    string getStatus();
    void setAlarm();

private:
    bool isActive = false;
    int code[4] = { 1, 2, 3, 4 };

};
#endif // !ALARM_H
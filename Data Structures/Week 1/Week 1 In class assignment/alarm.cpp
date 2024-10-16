#include "alarm.h"
#include <iostream>

using namespace std;

MainAlarm::MainAlarm()
{

}
MainAlarm::~MainAlarm()
{

}

    int code[4] = { 1, 2, 3, 4 };

string MainAlarm::getStatus() {
    if (isActive == true)
    {
        return "Alarm is on";
    }
    else if (isActive == false)
    {
        return "Alarm is off";
    }
}
void setAlarm()
{   
    int newArr[4];
    for (int i = 0; i < sizeof(code); i++)
    {
        int number;
        cin >> number;
        newArr[i] = number;

    }
    if (newArr == code)
    {
        cout << "Alarm set correctly";
    }
    else
    {
        cout << "Try again";
    }
}
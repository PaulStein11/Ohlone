/*
    Description: Glass Breakage Detection is defined with the class GlassAlarm
    Two arguments are define: a default inactive status and a string of rooms
    The methods are to get and set the status of the alarm as well as arming the rooms
*/

#ifndef GLASSALARM_H
#define GLASSALARM_H

#include <string>

using namespace std;

class GlassAlarm
{
public:
    GlassAlarm();
    ~GlassAlarm();
    string getStatus();
    void setAlarm();
    string armRooms(string rooms[]);

private:
    bool isActive = false;
    string rooms[4] = { "living room", "bedroom" "master bedroom", "kitchen" };


};
#endif // !GLASSALARM_H
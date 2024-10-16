/*
    Description: Lightning Control is defined with the class Lights
    Three arguments are define: sensor and network status as well as an array of rooms
    The methods are to get and set the status of the lights
    and to show the number of lights active in the house
*/

#ifndef LIGHTS_H
#define LIGHTS_H

#include <string>

using namespace std;

class Lights 
{
public:
    Lights(bool isWIFIConnected);
    ~Lights();
    string getStatus();
    void setLights();
    string getTotalLights(string rooms[]);

private:
    bool isActive = false;
    string rooms[4] = { "living room", "bedroom" "master bedroom", "kitchen" };
    bool isWIFIConnected = false;




};
#endif // !LIGHTS_H
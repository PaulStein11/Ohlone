/*
    Description: Entry and Motion Detector is defined with the class MotionSensor
    Three arguments are define : description of the sensor, phone number and a default status
    The methods are to set and get status and ro send notifications to the specific number
*/

#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include <string>

using namespace std;

class MotionSensor
{
public:
    MotionSensor(string description, int phone);
    ~MotionSensor();
    // Same as garage door: can inherit
    string getStatus();
    void setStatus();
    string sendNotification();

private:
    string description;
    bool isActive = false;
    int phone;



};
#endif !MOTIONSENSOR_H
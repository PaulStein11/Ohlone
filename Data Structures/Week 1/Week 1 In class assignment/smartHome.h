#ifndef SMARTHOME_H
#define SMARTHOME_H

#include<string>
#include "appliance.h"
#include "energy.h"
#include "garage_door.h"
#include "alarm.h"
#include "glass_alarm.h"
#include "lights.h"
#include "locker.h"
#include "motion_sensor.h"
#include "phone_alerts.h"
#include "thermostat.h"

using namespace std;

class SmartHome
{
public:
	SmartHome();
	string setSmartHome();

/*
	private:
	Appliance appliances;
	EnergySystem energySystem;
	GarageDoor garageDoor;
	MainAlarm mainAlarm;
	GlassAlarm glassAlarm;
	Lights lights;
	Locker locker;
	MotionSensor motionSensor;
	PhoneAlerts phoneAlerts;
	Thermostat thermostat;

	*/ 
};



#endif // !SMARTHOME_H


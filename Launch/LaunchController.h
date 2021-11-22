#ifndef LAUNCHCONTROLLER_H
#define LAUNCHCONTROLLER_H

#include "../Rocket/Configuration/ConfigurationController.h"
#include "../Rocket/Configuration/Falcon9Configuration.h"
#include "../Rocket/Configuration/FalconHeavyConfiguration.h"
#include "../Spacecraft/Spacecraft.h"
//#include "../Orbit/OrbitController.h"
//#include "../Orbit/OrbitController.h"
#include <string>

class Spacecraft;
class LaunchController
{

protected:
    double totalWeight;
    bool hasCrew;
    int satilite;

    ConfigurationController *rocketConfigurator;
    Spacecraft *spacecraft;
    Rocket *rocket;
    //OrbitalControl *orbit;

public:
    LaunchController();
    LaunchController(LaunchController *);
    virtual ~LaunchController();

    bool getHasCrew();
    void setHasCrew(bool);

    virtual void launch();
	
	// state dp:
	void changeSpacecraft();//it will simply just change the spacecraft type to the other spacecraft
	std::string getSpacecraftName();
	void setSpacecraft(Spacecraft* sc);
	// end of state dp
};

#endif

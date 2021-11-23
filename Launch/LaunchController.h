#ifndef LAUNCHCONTROLLER__H
#define LAUNCHCONTROLLER__H

#include "../Rocket/Configuration/ConfigurationController.h"
#include "../Rocket/Configuration/Falcon9Configuration.h"
#include "../Rocket/Configuration/FalconHeavyConfiguration.h"
#include "../Spacecraft/CrewDragon.h"
#include "../Spacecraft/Dragon.h"
#include "../Spacecraft/Spacecraft.h"
// #include "../Orbit/OrbitController.h"
// #include "../Orbit/OrbitController.h"

class LaunchController
{

protected:
    double totalWeight;
    bool hasCrew;
    int satilite;

    ConfigurationController *rocketConfigurator;
    Spacecraft *spacecraft;
    Rocket *rocket;
    // OrbitalControl *orbit;

public:
    LaunchController();
    LaunchController(LaunchController *);
    virtual ~LaunchController();
    void clear();

    bool getHasCrew();
    void setHasCrew(bool);
    void setSpacecraft(Spacecraft *);
    virtual void launch() = 0;
    Rocket *getRocket();
    void setsat(int);
};

#endif

#ifndef LAUNCHCONTROLLER_H
#define LAUNCHCONTROLLER_H

#include "../Rocket/Configuration/ConfigurationController.h"
#include "../Rocket/Configuration/Falcon9Configuration.h"
#include "../Rocket/Configuration/FalconHeavyConfiguration.h"
#include "../Spacecraft/CrewDragon.h"
#include "../Spacecraft/Dragon.h"
#include "../Orbit/OrbitController.h"
#include "OrbitController.h"

class LaunchController
{

protected:
    double totalWeight;
    bool hasCrew;
    int satilite;

    ConfigurationController *rocketConfigurator;
    Spacecraft *spacecraft;
    Rocket *rocket;
    OrbitalControl *orbit;

public:
    LaunchController();
    LaunchController(LaunchController *);
    ~LaunchController();

    bool getHasCrew();
    void setHasCrew(bool);

    virtual void launch();
};

#endif
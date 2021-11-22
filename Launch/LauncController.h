#ifndef LAUNCHCONTROLLER_H
#define LAUNCHCONTROLLER_H

#include "../Rocket/Configuration/ConfigurationController.h"
#include "../Spacecraft/CrewDragon.h"
#include "../Spacecraft/Dragon.h"
#include "../Orbit/OrbitController.h"

class LaunchController {

    private:
        double totalWeight;
        bool hasCrew;

        ConfigurationController* rocketConfigurator;
        Spacecraft* spacecraft;
        Rocket* rocket;

    public:
        LaunchController();
        ~LaunchController();

        bool getHasCrew();
        void setHasCrew(bool);

        virtual void launch() = 0;
};

#endif
#ifndef FALCON9CONFIGURATION_H
#define FALCON9CONFIGURATION_H

#include "ConfigurationController.h"

class Falcon9Configuration : public ConfigurationController {

    public: 
        Falcon9Configuration();
        ~Falcon9Configuration();

        Rocket* phaseOne();
        Rocket* phaseTwo();
};

#endif
#ifndef FALCONHEAVYCONFIGURATION_H
#define FALCONHEAVYCONFIGURATION_H

#include "ConfigurationController.h"

class FalconHeavyConfiguration : public ConfigurationController {

    public: 
        FalconHeavyConfiguration();
        ~FalconHeavyConfiguration();

        Rocket* phaseOne();
        Rocket* phaseTwo();
};

#endif
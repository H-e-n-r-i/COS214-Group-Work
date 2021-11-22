#ifndef CONFIGURATIONCONTROLLER_H
#define CONFIGURATIONCONTROLLER_H

#include "../Falcon9.h"
#include "../FalconHeavy.h"
#include "../Composition/Falcon9Core.h"
#include "../Composition/MerlinEngine.h"
#include "../Composition/VaccuumMerlinEngine.h"

class ConfigurationController {

    public: 
        ConfigurationController();
        ~ConfigurationController();

        virtual Rocket* phaseOne() = 0;
        virtual Rocket* phaseTwo() = 0;
};

#endif
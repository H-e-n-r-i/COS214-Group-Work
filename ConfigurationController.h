#ifndef CONFIGURATIONCONTROLLER_H
#define CONFIGURATIONCONTROLLER_H
#include "Falcon9.h"
#include "FalconHeavy.h"

/**
 * @author Nhlamulo Maluleka
 * @section AbstractFactory
 */

class ConfigurationController{
    public:
        ConfigurationController(){}
        virtual ~ConfigurationController(){}
        virtual Rocket* stageOne() = 0;
        virtual Rocket* stageTwo() = 0;
};

#endif //CONFIGURATIONCONTROLLER_H
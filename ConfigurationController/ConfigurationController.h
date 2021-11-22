#ifndef CONFIGURATIONCONTROLLER_H
#define CONFIGURATIONCONTROLLER_H
#include "../Rocket/Falcon9.h"
#include "../Rocket/FalconHeavy.h"

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
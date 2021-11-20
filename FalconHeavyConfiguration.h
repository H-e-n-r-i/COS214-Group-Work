#ifndef FALCONHEAVYCONFIGURATION_H
#define FALCONHEAVYCONFIGURATION_H
#include "ConfigurationController.h"

/**
 * @author Nhlamulo Maluleka
 * @section Abstract Factory
 */

class FalconHeavyConfiguration: public ConfigurationController{
    public:
        FalconHeavyConfiguration();
        virtual ~FalconHeavyConfiguration();
        virtual Rocket* stageOne();
        virtual Rocket* stageTwo();
};

#endif //FALCONHEAVYCONFIGURATION_H
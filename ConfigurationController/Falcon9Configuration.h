#ifndef FALCON9CONFIGURATION_H
#define FALCON9CONFIGURATION_H
#include "ConfigurationController.h"

/**
 * @author Nhlamulo Maluleka
 * @section Abstract Factory
 */

class Falcon9Configuration: public ConfigurationController{
    public:
        Falcon9Configuration();
        virtual ~Falcon9Configuration();
        virtual Rocket* stageOne();
        virtual Rocket* stageTwo();
};

#endif //FALCON9CONFIGURATION_H
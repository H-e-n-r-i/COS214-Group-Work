#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "Rocket.h"

/**
 * @author Nhlamulo Maluleka
 * @section Abstract Factory
 */

class FalconHeavy: public Rocket{
    public:
        FalconHeavy(string);
        ~FalconHeavy();
        virtual void showStage();
};

#endif //FALCONHEAVY_H
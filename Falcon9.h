#ifndef FALCON9_H
#define FALCON9_H
#include "Rocket.h"

/**
 * @author Nhlamulo Maluleka
 * @section Abstract Factory
 */

class Falcon9: public Rocket{
    public:
        Falcon9(string);
        ~Falcon9();
        virtual void showStage();
};

#endif //FALCON9_H
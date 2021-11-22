#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include "Rocket.h"

class FalconHeavy : public Rocket {

    private:
        std::string phase;
    
    public:
        FalconHeavy(std::list<Composition*>);
        ~FalconHeavy();

        void showPhase();
};

#endif
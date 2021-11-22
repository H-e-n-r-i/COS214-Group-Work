#ifndef FALCON9_H
#define FALCON9_H

#include "Rocket.h"

class Falcon9 : public Rocket {

    private:
        std::string phase;
    
    public:
        Falcon9(std::list<Composition*>);
        ~Falcon9();

        void showPhase();
};

#endif
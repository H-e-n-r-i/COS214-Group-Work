#ifndef DRAGON_H
#define DRAGON_H

#include "Spacecraft.h"

class Dragon : public Spacecraft {

    public:
        Dragon(std::vector<Cargo*>);
        ~Dragon();

        double calcCrew();
        double calcCargo();
};

#endif
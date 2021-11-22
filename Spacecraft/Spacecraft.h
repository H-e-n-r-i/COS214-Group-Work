#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <vector>

#include "Load/Cargo.h"

class Spacecraft {

    private:
        double totalWeight;
        double baseWeight;
        std::vector<Cargo*> cargo;
    
    public:
        Spacecraft(std::vector<Cargo*>);
        ~Spacecraft();

        std::vector<Cargo*> getCargo();

        /*
        * Template method: getTotalWeight
        * Primitive operation1: calcCrew
        * Primitive operation2: calcCargo
        */
        double getTotalWeight();
        virtual double calcCrew() = 0;
        virtual double calcCargo() = 0;

};

#endif
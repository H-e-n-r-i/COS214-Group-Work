#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Spacecraft.h"
#include "./Load/Crew.h"

class CrewDragon : public Spacecraft {

    private:
        std::vector<Crew*> crew;

    public:
        CrewDragon(std::vector<Cargo*>, std::vector<Crew*>);
        ~CrewDragon();

        double calcCrew();
        double calcCargo();
};

#endif
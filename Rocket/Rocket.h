#ifndef ROCKET_H
#define ROCKET_H

#include <list>

#include "./Composition/Composition.h"

class Rocket {

    private:
        double baseWeight;
        double optimalLimit;
        double totalWeight;
        double spacecraftWeight;

        std::list<Composition*> composition;

    public:
        Rocket();
        virtual ~Rocket();

        /* 
        * For instantiation purposes in derived classes
        * and AbstractFactory (ConfigurationController).
        */
        virtual void initialize(double, double) = 0;
        virtual void setComposition(std::list<Composition*>) = 0;

        void setSpacecraftWeight(double);
        double getWeight();
        double getOptimality();

        virtual void startEngines() = 0;

};

#endif
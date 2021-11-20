#ifndef ROCKET_H
#define ROCKET_H
#include<list>
#include<string>
#include<iostream>
#include "VaccumMerlinEngine.h"
#include "MerlinEngine.h"
#include "Falcon9Core.h"
using namespace std;

/**
 * @author Nhlamulo Maluleka
 * @section Abtract Factory
 */

class Rocket{
    private:
        double baseCost;
        double optimalLimit;
        // Spacecraft weight
        double totalWeight;
        double spaceCraftWeight;

        /**
         * @param engine - to instantiate the Merlin Engine
         */
        Composition* engine;

        /**
         * @param core - to hold the composite cores which will attach engines
         */
        Composition* core;
        
        list<Composition*> compositions;
        string rocketType; //Rocket type Falcon9 || FalconHeavy

    public:
        Rocket();
        Rocket(double, double, string, string);
        virtual ~Rocket();
        double getBaseCost();
        double getOptimalLimit();
        double getTotalWeight();
        double getSpaceCraftWeight();
        void assembleComposition();
        void setSpaceCraftWeight(double);
        string getStage();
        // Template Method || notify 1.0
        void startEngines();
        virtual void showStage() = 0;

    protected:
        string stage;
};

#endif //ROCKET_H
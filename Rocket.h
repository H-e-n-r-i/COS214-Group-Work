#ifndef ROCKET_H
#define ROCKET_H
#include<list>
#include<string>
#include<iostream>
#include "VaccumMerlinEngine.h"
#include "MerlinEngine.h"
#include "Falcon9Core.h"
#include "EngineState.h"
using namespace std;

/**
 * @author Nhlamulo Maluleka
 * @section Abtract Factory
 */

class Rocket{
    private:
        double baseWeight;
        double optimalLimit;
        double totalWeight;
        double spaceCraftWeight;
        double multiplier;
        list<Composition*> compositions;
        string rocketType; //Rocket type Falcon9 || FalconHeavy

    public:
        Rocket();
        Rocket(double, double, string, string);
        virtual ~Rocket();
        double getBaseWeight();
        double getOptimalLimit();
        double getTotalWeight();
        double getMultiplier();
        double getSpaceCraftWeight();
        void assembleComposition();
        void setSpaceCraftWeight(double);
        string getStage();
        string getRocketType();
        void startEngines();
        void inspectEngines();
        void modifyEngineState();     
        void notify();   
        virtual void showStage() = 0;

    protected:
        string stage;
        list<EngineState*> engineStates;
};

#endif //ROCKET_H
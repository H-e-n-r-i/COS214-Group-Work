#ifndef COMPOSITION_H
#define COMPOSITION_H
#include<iostream>
#include<list>
#include<string>
using namespace std;
#include "../EngineState/EngineState.h"

/**
 * @author Nhlamulo Maluleka
 * @section Composite + Prototype + Observer + Bridge
 */

class Composition{
    public:
        Composition();
        virtual ~Composition();
        virtual int generateEngineNumber();
        virtual int getEngineNumber();
        virtual void setEngineNumber(int);
        virtual void addEngine(Composition*);
        virtual list<Composition*> getEngines();
        virtual void startEngines() = 0;
        string getEngineName();

        // Prototype Method
        virtual Composition* reconstruct() = 0;
        
        // Observer
        virtual string getEngineState();
        virtual void setEngineState(string);
        virtual void updateState();
        virtual void setEngineState(EngineState*);

    protected:
        EngineState* state;
        string engineState;
        string name;
};

#endif //COMPOSITION_H
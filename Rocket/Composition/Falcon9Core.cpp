#include "Falcon9Core.h"

Falcon9Core::Falcon9Core():Composition(){}

Falcon9Core::~Falcon9Core(){
    list<Composition*>::iterator it;

    for(it = engines.begin(); it != engines.end(); it++) delete *it;
}

// Prototype Method
Composition* Falcon9Core::reconstruct(){
    return new Falcon9Core(*this);
}

void Falcon9Core::addEngine(Composition* eng){
    engines.push_back(eng);
}

void Falcon9Core::startEngines(){
    list<Composition*>::iterator it;
    cout << "\nStarting Engines in a single Core...\n";
    for(it = engines.begin(); it != engines.end(); ++it){
        (*it)->startEngines();
    }
}

list<Composition*> Falcon9Core::getEngines(){
    return engines;
}
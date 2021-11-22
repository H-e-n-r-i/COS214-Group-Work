#include "Composition.h"

Composition::Composition(){
    state = new Idle();
}

Composition::~Composition(){
    delete state;
}

int Composition::generateEngineNumber(){
    return 0;
}

int Composition::getEngineNumber(){
    return 0;
}

void Composition::setEngineNumber(int){}

void Composition::addEngine(Composition*){}

list<Composition*> Composition::getEngines(){
    return (list<Composition*>)0;
}

string Composition::getEngineName(){
    return name;
}

string Composition::getEngineState(){
    return engineState;
}

void Composition::setEngineState(string state){
    engineState = state;
}

void Composition::updateState(){}

void Composition::setEngineState(EngineState* state){
    this->state = state;
}

#include "MerlinEngine.h"

MerlinEngine::MerlinEngine():Composition(){
    engineNumber = 0;
    name = "Merlin Engine";
}

MerlinEngine::~MerlinEngine(){
    // Reset the engine number
    engineNumber = 0;
}

// Prototype Method
Composition* MerlinEngine::reconstruct(){
    Composition* clone = new MerlinEngine(*this);
    clone->setEngineNumber(this->generateEngineNumber());
    return clone;
}

void MerlinEngine::startEngines(){
    std::cout << "Starting " << getEngineName() << " " << this->getEngineNumber() << std::endl;
    state = new Running();
    setEngineState(state->getState());
}

int MerlinEngine::generateEngineNumber(){
    return ++engineNumber;
}

int MerlinEngine::getEngineNumber(){
    return engineNumber;
}

void MerlinEngine::setEngineNumber(int number){
    engineNumber = number;
}

void MerlinEngine::updateState(){
    if(state->getState() != getEngineState()){
        setEngineState(state->getState());
    }
}
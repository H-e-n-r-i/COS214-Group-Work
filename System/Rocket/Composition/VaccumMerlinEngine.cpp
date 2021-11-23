#include "VaccumMerlinEngine.h"

VaccumMerlinEngine::VaccumMerlinEngine():Composition(){
    name = "Vaccum Merlin Engine";
    engineNumber = 0;
}

VaccumMerlinEngine::~VaccumMerlinEngine(){}

// Prototype Method
Composition* VaccumMerlinEngine::reconstruct(){
    Composition* clone = new VaccumMerlinEngine(*this);
    clone->setEngineNumber(this->generateEngineNumber());
    return clone;
}

void VaccumMerlinEngine::startEngines(){
    std::cout << "Starting " << this->getEngineName() << " " << this->getEngineNumber() << std::endl;
    state = new Running();
    setEngineState(state->getState());
}

int VaccumMerlinEngine::generateEngineNumber(){
    return ++engineNumber;
}

int VaccumMerlinEngine::getEngineNumber(){
    return engineNumber;
}

void VaccumMerlinEngine::setEngineNumber(int number){
    engineNumber = number;
}

void VaccumMerlinEngine::updateState(){
    if(state->getState() != getEngineState()){
        setEngineState(state->getState());
    }
}
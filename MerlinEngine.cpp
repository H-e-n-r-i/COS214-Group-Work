#include "MerlinEngine.h"

MerlinEngine::MerlinEngine():Composition(){
    engineNumber = 0;
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
    std::cout << "Starting [Merlin] Engine: " << getEngineNumber() << std::endl;
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
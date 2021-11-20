#include "VaccumMerlinEngine.h"

VaccumMerlinEngine::VaccumMerlinEngine():Composition(){}

VaccumMerlinEngine::~VaccumMerlinEngine(){
    engineNumber = 1;
}

// Prototype Method
Composition* VaccumMerlinEngine::reconstruct(){
    Composition* clone = new VaccumMerlinEngine(*this);
    clone->setEngineNumber(this->generateEngineNumber());
    return clone;
}

void VaccumMerlinEngine::startEngines(){
    std::cout << "Starting [Vaccum Merlin Engine] Engine: " << this->getEngineNumber() << std::endl;
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
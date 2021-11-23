#include "Falcon9Configuration.h"

Falcon9Configuration::Falcon9Configuration(){}

Falcon9Configuration::~Falcon9Configuration(){}

Rocket* Falcon9Configuration::stageOne(){
    return new Falcon9("Stage 1");
}

Rocket* Falcon9Configuration::stageTwo(){
    return new Falcon9("Stage 2");
}
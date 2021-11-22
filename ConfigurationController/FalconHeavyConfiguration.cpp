#include "FalconHeavyConfiguration.h"

FalconHeavyConfiguration::FalconHeavyConfiguration(){}

FalconHeavyConfiguration::~FalconHeavyConfiguration(){}

Rocket* FalconHeavyConfiguration::stageOne(){
    return new FalconHeavy("Stage 1");
}

Rocket* FalconHeavyConfiguration::stageTwo(){
    return new FalconHeavy("Stage 2");
}
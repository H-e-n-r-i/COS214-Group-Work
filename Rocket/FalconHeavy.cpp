#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(string stage):Rocket(80.0, 800.0, stage, "FalconHeavy"){
    this->stage = stage;
}

FalconHeavy::~FalconHeavy(){}

void FalconHeavy::showStage(){
    cout << this->getStage() << endl;
}
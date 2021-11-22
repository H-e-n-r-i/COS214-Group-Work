#include "Falcon9.h"

Falcon9::Falcon9(string stage):Rocket(50.0, 300.0, stage, "Falcon9"){
    this->stage = stage;
}

Falcon9::~Falcon9(){}

void Falcon9::showStage(){
    cout << this->getStage() << endl;
}
#include "../ConfigurationController/Falcon9Configuration.h"
#include "../ConfigurationController/FalconHeavyConfiguration.h"
#include <iostream>
using namespace std;

int main(){
    ConfigurationController* F9Config = new Falcon9Configuration();
    ConfigurationController* FhConfig = new FalconHeavyConfiguration();

    Rocket* f9 = F9Config->stageOne();
    Rocket* fh = FhConfig->stageOne();

    fh->startEngines();
    fh->setSpaceCraftWeight(930.0);
    fh->inspectEngines();
    fh->modifyEngineState();

    delete f9;
    delete fh;
    return 0;
}
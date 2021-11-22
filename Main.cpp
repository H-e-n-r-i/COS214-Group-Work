#include "./Rocket/Configuration/Falcon9Configuration.h"
#include "./Rocket/Configuration/FalconHeavyConfiguration.h"
#include "Launch/LaunchClient.h"
#include <iostream>
using namespace std;

int main()
{
    LaunchClient client;
    client.Test();
    client.Launch();
    client.Dock();
    client.Complete();
    // ConfigurationController* F9Config = new Falcon9Configuration();
    // ConfigurationController* FhConfig = new FalconHeavyConfiguration();

    // Rocket* f9 = F9Config->stageOne();
    // Rocket* fh = FhConfig->stageOne();

    // fh->startEngines();
    // fh->setSpaceCraftWeight(930.0);
    // fh->inspectEngines();
    // fh->modifyEngineState();

    // delete f9;
    // delete fh;
    return 0;
}
#ifndef LAUNCHCLIENT__H
#define LAUNCHCLIENT__H

#include "LaunchController.h"
#include "TestPhase.h"
#include "DockPhase.h"
#include "CompletionPhase.h"
#include "LaunchPhase.h"
#include <string>

using namespace std;

class LaunchClient
{
private:
    LaunchController *controller;
    
public:
    LaunchClient(/* args */);
    ~LaunchClient();
};

#endif

#ifndef LAUNCHCLIENT__H
#define LAUNCHCLIENT__H

#include "LauncController.h"
#include <string>

using namespace std;

class LaunchClient
{
private:
    LaunchController *controller;
    string phase;

public:
    LaunchClient(/* args */);
    ~LaunchClient();
};

#endif

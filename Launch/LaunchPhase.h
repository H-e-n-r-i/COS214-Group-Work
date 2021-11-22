#ifndef LAUNCHPHASE_H
#define LAUNCHPHASE_H

#include "LauncController.h"

class LaunchPhase : public LaunchController
{

public:
    LaunchPhase();
    LaunchPhase(LaunchController *);
    ~LaunchPhase();

    void launch();
};

#endif
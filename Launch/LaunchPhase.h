#ifndef LAUNCHPHASE_H
#define LAUNCHPHASE_H

#include "LaunchController.h"

class LaunchPhase : public LaunchController
{

public:
    LaunchPhase();
    LaunchPhase(LaunchController *);
    ~LaunchPhase();

    void launch();
};

#endif
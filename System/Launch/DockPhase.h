#ifndef DOCKPHASE_H
#define DOCKPHASE_H

#include "LaunchController.h"

class DockPhase : public LaunchController
{

public:
    DockPhase();
    DockPhase(LaunchController *);
    ~DockPhase();
    void launch();
};

#endif
#ifndef LAUNCHPHASE_H
#define LAUNCHPHASE_H

#include "LauncController.h"

class LaunchPhase : public LaunchController {

    public:
        LaunchPhase();
        ~LaunchPhase();

        void launch();
};

#endif
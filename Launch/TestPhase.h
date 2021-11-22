#ifndef TESTPHASE_H
#define TESTPHASE_H

#include "LauncController.h"

class TestPhase : public LaunchController {

    private:
        void loadCargo();
        void loadCrew();

    public:
        TestPhase();
        ~TestPhase();

        void launch();
};

#endif
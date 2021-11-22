#ifndef TESTPHASE_H
#define TESTPHASE_H

#include "LauncController.h"
#include <vector>

class TestPhase : public LaunchController
{

private:
    std::vector<Cargo *> loadCargo();
    std::vector<Crew *> loadCrew();

public:
    TestPhase();
    ~TestPhase();

    void launch();
};

#endif
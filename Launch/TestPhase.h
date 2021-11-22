#ifndef TESTPHASE_H
#define TESTPHASE_H

#include "LauncController.h"
#include <vector>

class TestPhase : public LaunchController
{

private:
    std::vector<Cargo *> loadCargo();
    std::vector<Crew *> loadCrew();
    void CheckCase(Spacecraft *);

public:
    TestPhase();
    ~TestPhase();

    void launch();
};

#endif
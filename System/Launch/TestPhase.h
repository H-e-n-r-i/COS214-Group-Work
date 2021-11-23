#ifndef TESTPHASE_H
#define TESTPHASE_H

#include "LaunchController.h"

class TestPhase : public LaunchController
{

private:
    std::vector<Cargo *> loadCargo();
    std::vector<Crew *> loadCrew();
    void CheckCase(Spacecraft *);
    double optimal(Rocket *);
    double OptimalValue;

public:
    TestPhase();
    TestPhase(LaunchController *);
    ~TestPhase();

    void launch();
};

#endif
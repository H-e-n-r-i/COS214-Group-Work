#include "TestPhase.h"

TestPhase::TestPhase() : LaunchController()
{

    std::vector<Cargo *> cargo = this->loadCargo();
    std::vector<Crew *> crew = this->loadCrew();

}

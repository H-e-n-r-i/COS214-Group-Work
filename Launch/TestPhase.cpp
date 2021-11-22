#include "TestPhase.h"

TestPhase::TestPhase() : LaunchController()
{

    std::vector<Cargo *> cargo = this->loadCargo();
    std::vector<Crew *> crew = this->loadCrew();
    (hasCrew) ? spacecraft = new CrewDragon(cargo, crew) : spacecraft = new Dragon(cargo);
}

std::vector<Cargo *> TestPhase::loadCargo()
{
    int in = 0;
    std::vector<Cargo *> cargo;
    std::cout << "How many items of cargo would you like to load?/n";
    std::cin >> in;
    for (int i = 0; i < in; i++)
    {
        cargo.push_back(new Cargo());
    }
}

std::vector<Crew *> TestPhase::loadCrew()
{
    int in = 0;
    std::vector<Crew *> crew;
    std::cout << "How many crew members are coming with?\n";
    std::cin >> in;
    if (in != 0)
        hasCrew = true;
    for (int i = 0; i < in; i++)
    {
        crew.push_back(new Crew());
    }
}
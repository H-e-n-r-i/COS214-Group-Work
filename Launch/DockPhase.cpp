#include "DockPhase.h"

DockPhase::DockPhase() : LaunchController() {}

DockPhase::DockPhase(LaunchController *in) : LaunchController(in) {}

DockPhase::~DockPhase() {}

void DockPhase::launch()
{
    /*if (orbit != nullptr)
    {
        std::cout << "Releasing satelites\n";
        if (satilite > 60)
            satilite = 60;
        orbit->createSatelites(satilite);
        std::cout << "Satelites connected!\n";
    }*/
    std::cout << "docking with the space station!\nDocking succesful!\n";
}

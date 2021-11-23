#include "DockPhase.h"

DockPhase::DockPhase() : LaunchController() {}

DockPhase::DockPhase(LaunchController *in) : LaunchController(in) {}

DockPhase::~DockPhase() {}

void DockPhase::launch()
{
    if (orbit != nullptr)
    {
        std::cout << "Releasing satelites\n";
        if (satilite > 60)
            satilite = 60;
        orbit->loadSatitiles(satilite);
    }
    std::cout << "docking with the space station!\nDocking succesful!\n";
}
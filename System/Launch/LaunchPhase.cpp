#include "LaunchPhase.h"
#include <chrono>
#include <thread>

using namespace std::chrono;

LaunchPhase::LaunchPhase() : LaunchController() {}

LaunchPhase::LaunchPhase(LaunchController *in) : LaunchController(in) {}

LaunchPhase::~LaunchPhase() {}

void LaunchPhase::launch()
{
    std::cout << "Initiating inspection!\n";
    rocket->startEngines();
    rocket->inspectEngines();
    if (!rocket->isReadyForLaunch())
    {
        std::cout << "There was an error with launch, aborting\n";
        return;
    }
    char temp;
    std::cout << "We are go for launch!\nStart count down! (enter any value)\n";
    std::cin >> temp;
    for (int i = 9; i >= 0; i--)
    {
        std::this_thread::sleep_for(seconds(1));
        std::cout << i << endl;
    }
    // std::cout << "LIFT OFF!\nStage 1\n";
    // for (int i = 0; i < 99; i++)
    //     std::cout << "*";

    std::this_thread::sleep_for(milliseconds(100));

    std::cout << endl;

    std::cout << "Switching to stage 2\n";
    delete rocket;
    rocket = rocketConfigurator->stageTwo();
    rocket->startEngines();
    std::cout << "Final Approach!\n";

    std::this_thread::sleep_for(milliseconds(100));
    std::cout << endl
              << "Destination reached\n";
}
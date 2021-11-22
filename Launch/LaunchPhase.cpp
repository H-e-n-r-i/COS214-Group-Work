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
    rocket->inspectEngines();
    rocket->startEngines();
    if (!rocket->isReadyForLaunch())
    {
        std::cout << "There was an error with launch, aborting\n";
        return;
    }
    std::cout << "We are go for launch!\nStart count down! (press any key)\n";
    std::cin;
    for (int i = 9; i >= 0; i--)
    {
        std::this_thread::sleep_for(seconds(1));
        std::cout << i << endl;
    }
    std::cout << "LIFT OFF!\nStage 1\n";
    for (int i = 0; i < 99; i++)
        std::cout << "*";

    for (int i = 9; i >= 0; i--)
    {
        std::this_thread::sleep_for(nanoseconds(50));
        std::cout << "\b\r#";
    }
    std::cout << endl;

    std::cout << "Switching to stage 2\n";
    delete rocket;
    rocket = rocketConfigurator->stageTwo();
    rocket->startEngines();
    std::cout << "Final Approach!\n";
    for (int i = 0; i < 99; i++)
        std::cout << "*";

    for (int i = 9; i >= 0; i--)
    {
        std::this_thread::sleep_for(nanoseconds(50));
        std::cout << "\b\r#";
    }
    std::cout << endl
              << "Destination reached\n";
}
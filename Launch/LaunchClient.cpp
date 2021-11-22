#include "LaunchClient.h"

LaunchClient::LaunchClient(/* args */)
{
    t = l = d = c = false;
    controller = nullptr;
}

LaunchClient::~LaunchClient()
{
    delete controller;
}

void LaunchClient::Test()
{
    if (!t)
    {
        controller = new TestPhase();
        controller->launch();
    }
    else
        std::cout << "Test Phase has already taken place.\n";
}

void LaunchClient::Launch()
{
    if (!l)
    {
        if (t)
        {
            controller = new DockPhase(controller);
            controller->launch();
        }
        else
            std::cout << "Testing phase needs to take place first\n";
    }
    else
        std::cout << "Launching phase has already taken place\n";
}

void LaunchClient::Dock()
{
    if (!d)
    {
        if (l)
        {
            controller = new DockPhase(controller);
            controller->launch();
        }
        else
            std::cout << "Launching phase needs to take place first\n";
    }
    else
        std::cout << "Docking phase has already taken place\n";
}

void LaunchClient::Complete()
{
    if (!c)
    {
        if (d)
        {
            controller = new DockPhase(controller);
            controller->launch();
        }
        else
            std::cout << "Docking phase needs to take place first\n";
    }
    else
        std::cout << "Completion phase has already taken place\n";
}

#include "LaunchClient.h"

LaunchClient::LaunchClient(/* args */)
{
    t = l = d = c = false;
    controller = nullptr;
}

LaunchClient::~LaunchClient()
{
    controller->clear();
    delete controller;
}

void LaunchClient::Test()
{
    if (!t)
    {
        controller = new TestPhase();
        controller->launch();
        t = true;
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
            controller = new LaunchPhase(controller);
            controller->launch();
            l = true;
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
            d = true;
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
            controller = new CompletionPhase(controller);
            controller->launch();
            c = true;
        }
        else
            std::cout << "Docking phase needs to take place first\n";
    }
    else
        std::cout << "Completion phase has already taken place\n";
}

void LaunchClient::resetLaunch()
{
    controller->clear();
    delete controller;
    t = false;
    d = false;
    l = false;
    c = false;
}
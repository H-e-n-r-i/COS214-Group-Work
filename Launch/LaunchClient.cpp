#include "LaunchClient.h"

LaunchClient::LaunchClient(/* args */)
{
    t = l = d = c = connected = false;
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
    connected = false;
}

void LaunchClient::damage()
{
    controller->getRocket()->modifyEngineState();
}

void LaunchClient::changesat(int in)
{
    if (d)
    {
        std::cout << "Satellites have already been deployed!\n";
        return;
    }
    if (controller->getRocket()->getRocketType() != "Falcon9")
        std::cout << "Satellites are only supported on Falcon 9 rockets!\n";
    else
        controller->setsat(in);
}

void LaunchClient::sendMessage(string id, string message)
{
    if (!connected)
        std::cout << "Satellites need to be connected first!\n";
    else
        controller->getOrbit()->sendMessage(id, message);
}

void LaunchClient::connect()
{
    if (!d)
        std::cout << "Satellites need to be released into orbit first!\n";
    else
    {
        controller->getOrbit()->connect();
        connected = true;
    }
}

void LaunchClient::disconnect()
{
    if (!connected)
        std::cout << "Satellites need to be connected first!\n";
    else
    {
        controller->getOrbit()->disconnect();
        connected = false;
    }
}

int LaunchClient::getSat()
{
    return controller->getSat();
}
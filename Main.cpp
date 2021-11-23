#include "./Rocket/Configuration/Falcon9Configuration.h"
#include "./Rocket/Configuration/FalconHeavyConfiguration.h"
#include "Launch/LaunchClient.h"
#include <iostream>
using namespace std;

void input(LaunchClient &in);

void Simulation()
{
    LaunchClient client;
    input(client);
    client.Test();
    input(client);
    client.Launch();
    input(client);
    client.Dock();
    input(client);
    client.Complete();
    input(client);
}

void input(LaunchClient &in)
{
    std::cout << "Which changes would you like to make?\n"
              << "n - none\n"
              << "b - break engines\n"
              << "r - restart launch\n";
    char temp;
    cin >> temp;

    switch (temp)
    {
    case 'n':
        return;
        break;
    case 'b':
        in.damage();
        break;
    case 'r':
        in.resetLaunch();
        Simulation();
        std::cout.clear();
        return;
        break;

    default:
        return;
        break;
    }
}

int main()
{
    Simulation();
    return 0;
}

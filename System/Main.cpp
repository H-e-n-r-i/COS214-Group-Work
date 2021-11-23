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
}

void input(LaunchClient &in)
{
    std::cout << "Which changes would you like to make?\n"
              << "n - none\n"
              << "b - break engines\n"
              << "s - change amount of satelites\n"
              << "m - send message through satelites\n"
              << "c - connect satellites\n"
              << "d - disconnect satellites\n"
              << "r - restart launch\n";
    char temp;
    cin >> temp;
    string stemp;
    string stemp2;

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
    case 's':
        std::cout << "Set amount of satellites!\n";
        std::cin >> stemp;
        in.changesat(stoi(stemp));
        break;
    case 'm':
        std::cout << "Please enter satellite id (0-" << to_string(in.getSat() - 1) << ")\n";
        std::cin >> stemp;
        std::cout << "Please enter message\n";
        std::cin >> stemp2;
        in.sendMessage("s" + stemp, stemp2);
        break;
    case 'c':
        in.connect();
        input(in);
        break;
    case 'd':
        in.disconnect();
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

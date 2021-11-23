#ifndef LAUNCHCLIENT__H
#define LAUNCHCLIENT__H

#include "LaunchController.h"
#include "TestPhase.h"
#include "DockPhase.h"
#include "CompletionPhase.h"
#include "LaunchPhase.h"
#include <string>

using namespace std;

class LaunchClient
{
private:
    LaunchController *controller;
    bool t, l, d, c, connected;

public:
    LaunchClient(/* args */);
    ~LaunchClient();
    void Test();
    void Launch();
    void Dock();
    void Complete();
    void resetLaunch();
    void damage();
    void changesat(int);
    void sendMessage(string, string);
    void connect();
    void disconnect();
    int getSat();
};

#endif

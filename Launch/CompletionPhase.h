#ifndef COMPLETIONPHASE_H
#define COMPLETIONPHASE_H

#include "LaunchController.h"

class CompletionPhase : public LaunchController
{

public:
    CompletionPhase();
    CompletionPhase(LaunchController *);
    ~CompletionPhase();
    void launch();
};

#endif
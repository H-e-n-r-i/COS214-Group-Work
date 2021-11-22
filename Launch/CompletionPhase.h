#ifndef COMPLETIONPHASE_H
#define COMPLETIONPHASE_H

#include "LauncController.h"

class CompletionPhase : public LaunchController {

    public:
        CompletionPhase();
        ~CompletionPhase();

        void launch();
};

#endif
#ifndef DISCONNECTSIGNAL_H
#define DISCONNECTSIGNAL_H

#include "Signal.h"
#include <string>

class DisconnectSignal : public Signal {
    public:
        DisconnectSignal();
        ~DisconnectSignal();
        virtual void signal();
};

#endif

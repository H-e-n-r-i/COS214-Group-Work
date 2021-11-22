#ifndef DISCONNECTSIGNAL_H
#define DISCONNECTSIGNAL_H

#include "Signal.h"

class DisconnectSignal : public Signal {

    public:
        DisconnectSignal(std::string);
        ~DisconnectSignal();

        void signal();
};

#endif
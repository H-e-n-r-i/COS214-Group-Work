#ifndef DISCONNECTSIGNAL_H
#define DISCONNECTSIGNAL_H

#include "Signal.h"
#include <string>

class DisconnectSignal : public Signal {
    private:
        Signal* s;
    public:
        DisconnectSignal(std::string);
        ~DisconnectSignal();

        void signal();
};

#endif

#ifndef CONNECTSIGNAL_H
#define CONNECTSIGNAL_H

#include "Signal.h"
#include <string>

class ConnectSignal : public Signal {
    public:
        ConnectSignal();
        ~ConnectSignal();
        virtual void signal();
};

#endif

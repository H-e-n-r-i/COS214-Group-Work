#ifndef CONNECTSIGNAL_H
#define CONNECTSIGNAL_H

#include "Signal.h"

class ConnectSignal : public Signal {

    public:
        ConnectSignal(std::string);
        ~ConnectSignal();

        void signal();
};

#endif
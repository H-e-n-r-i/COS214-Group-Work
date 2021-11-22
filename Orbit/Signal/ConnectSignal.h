#ifndef CONNECTSIGNAL_H
#define CONNECTSIGNAL_H

#include "Signal.h"
#include <string>

class ConnectSignal : public Signal {
    private:
        Signal* s;
    public:
        ConnectSignal(std::string);
        ~ConnectSignal();

        void signal();
};

#endif

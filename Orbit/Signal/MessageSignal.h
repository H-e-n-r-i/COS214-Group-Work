#ifndef MESSAGESIGNAL_H
#define MESSAGESIGNAL_H

#include "Signal.h"
#include <string>

class MessageSignal : public Signal {
    private:
        Signal* s;
        string M;
    public:
        MessageSignal(std::string, std::string);
        ~MessageSignal();

        void signal();
};

#endif

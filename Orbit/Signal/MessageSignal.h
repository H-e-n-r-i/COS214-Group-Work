#ifndef MESSAGESIGNAL_H
#define MESSAGESIGNAL_H

#include "Signal.h"

class MessageSignal : public Signal {

    public:
        MessageSignal(std::string, std::string);
        ~MessageSignal();

        void signal();
};

#endif
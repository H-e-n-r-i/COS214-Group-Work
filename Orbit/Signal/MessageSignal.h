#ifndef MESSAGESIGNAL_H
#define MESSAGESIGNAL_H

#include "Signal.h"
#include <string>

class MessageSignal : public Signal {
    public:
        MessageSignal();
        ~MessageSignal();
        virtual void message(string);
};

#endif

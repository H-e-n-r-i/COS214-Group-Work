#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>

#include "../OrbitController.h"

class Signal {

    public:
        Signal();
        ~Signal();

        virtual void singal() = 0;
};

#endif
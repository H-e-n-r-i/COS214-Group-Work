#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>

#include "../OrbitController.h"

class Signal {
    private:
        string ID;
    public:
        Signal();
        ~Signal();

        virtual void signal() = 0;
        string getID();
        void setID(string s);
};

#endif

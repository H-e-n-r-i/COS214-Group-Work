#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>

#include "../OrbitController.h"

class Signal {
    private:
        string id;
    
    protected:
        OrbitalControl* orbitController;

    public:
        Signal();
        Signal(string);
        virtual ~Signal();
        virtual void signal();
        virtual void message(string);
        virtual void load(int);
        string getID();
        void setID(string);
        OrbitalControl* getOrbitControl(int);
        void setOrbitController(OrbitalControl*);
};

#endif //SIGNAL_H

#ifndef COMPOSITION_H
#define COMPOSITION_H

#include <iostream>

class Composition {

    public:
        Composition();
        ~Composition();

        virtual Composition* reconstruct() = 0;
        virtual void startEngines() = 0;
};

#endif
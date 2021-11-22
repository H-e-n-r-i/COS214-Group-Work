#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include <iostream>

#include "Composition.h"

class MerlinEngine : public Composition {

    public:
        MerlinEngine();
        ~MerlinEngine();

        Composition* reconstruct();
        void startEngines();
};

#endif
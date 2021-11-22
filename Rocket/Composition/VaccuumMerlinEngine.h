#ifndef VACCUUMMERLINENGINE_H
#define VACCUUMMERLINENGINE_H

#include <iostream>

#include "Composition.h"

class VaccuumMerlinEngine : public Composition {

    public:
        VaccuumMerlinEngine();
        ~VaccuumMerlinEngine();

        Composition* reconstruct();
        void startEngines();
};

#endif
#ifndef FALCON9CORE_H
#define FALCON9CORE_H

#include <iostream>

#include "Composition.h"

class Falcon9Core : public Composition {

    public:
        Falcon9Core();
        ~Falcon9Core();

        Composition* reconstruct();
        void startEngines();
};

#endif
#ifndef FALCON9CORE_H
#define FALCON9CORE_H
#include "Composition.h"
#include<list>
using namespace std;

/**
 * @author Nhlamulo Maluleka
 * @section Composite
 */

class Falcon9Core: public Composition{
    private:
        list<Composition*> engines;

    public:
        Falcon9Core();
        ~Falcon9Core();
        virtual void addEngine(Composition*);
        virtual Composition* reconstruct();
        virtual void startEngines();
};

#endif //FALCON9CORE_H
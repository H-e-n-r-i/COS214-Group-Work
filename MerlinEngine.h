#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include "Composition.h"

/**
 * @author Nhlamulo Maluleka
 * @section Composite
 */

class MerlinEngine: public Composition{
    private:
        int engineNumber;

    public:
        MerlinEngine();
        ~MerlinEngine();
        virtual Composition* reconstruct();
        virtual void startEngines();
        virtual int generateEngineNumber();
        virtual int getEngineNumber();
        virtual void setEngineNumber(int);
};

#endif //MERLINENGINE_H
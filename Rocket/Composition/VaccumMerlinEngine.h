#ifndef VACCUMMERLINENGINE_H
#define VACCUMMERLINENGINE_H
#include "Composition.h"

/**
 * @author Nhlamulo Maluleka
 * @section Composite
 */

class VaccumMerlinEngine: public Composition{
    private:
        int engineNumber;

    public:
        VaccumMerlinEngine();
        ~VaccumMerlinEngine();
        virtual Composition* reconstruct();
        virtual void startEngines();
        virtual int generateEngineNumber();
        virtual int getEngineNumber();
        virtual void setEngineNumber(int);
        virtual void updateState();
};

#endif //VACCUMMERLINENGINE_H
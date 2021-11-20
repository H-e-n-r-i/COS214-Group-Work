#ifndef COMPOSITION_H
#define COMPOSITION_H
#include<iostream>

/**
 * @author Nhlamulo Maluleka
 * @section Composite + Prototype
 */

class Composition{
    public:
        Composition();
        virtual ~Composition();
        virtual int generateEngineNumber();
        virtual int getEngineNumber();
        virtual void setEngineNumber(int);
        virtual void addEngine(Composition*);
        virtual Composition* reconstruct() = 0;
        virtual void startEngines() = 0;
};

#endif //COMPOSITION_H
#ifndef CARGO_H
#define CARGO_H

class Cargo {

    private:
        double weight;
    
    public:
        Cargo();
        ~Cargo();

        double getWeight();
};

#endif
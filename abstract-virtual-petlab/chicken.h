#ifndef CHICKEN_H
#define CHICKEN_H

#include "pet.h"

class Chicken: public Pet{
    int numEggsLaid;
    public:
        Chicken();
        Chicken(const Chicken&);
        Chicken(const string, const string, const Toy*, const int, const int, const int, const int);

        void setNumEggsLaid(const int);
        int getNumEggsLaid() const;
        void printPetData(); //override
        void printPetUtterance();
        void calculatePetCost();
};

#endif
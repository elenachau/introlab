#ifndef CHICKEN_H
#define CHICKEN_H
#include "pet.h"

class Chicken: public Pet{
    int numEggs;

    public:
        Chicken();
        Chicken(const int num, const string nm, const string spec, const int ageVal, const Toy* toyArr, const int numT);
        Chicken(const Chicken&);

        const int getNumEggsLaid();
        void setNumEggsLaid(const int);

        void printPetUtterance();
        void calculatePetCost();
        const int getIntValueFromChild();
};

#endif
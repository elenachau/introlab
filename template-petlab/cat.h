#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat: public Pet{
    int numLives;

    public:
        Cat();
        Cat(const int num, const string nm, const string spec, const int ageVal, const Toy* toyArr, const int numT);
        Cat(const Cat&);

        const int getNumLives();
        void setNumLives(const int);

        void printPetUtterance();
        void calculatePetCost();
        const int getIntValueFromChild();
};
#endif
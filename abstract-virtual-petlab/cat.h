#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat: public Pet{
    int numLives;

    public:
        Cat();
        Cat(const int, const string, const string, const int, const Toy*, const int, const int);
        Cat(const Cat&);

        int getNumLives() const;
        void setNumLives(const int);

        void printPetUtterance();
        void calculatePetCost();
        void printPetData();
};      

#endif
#ifndef CHICKEN_H
#define CHICKEN_H

#include "pet.h"

class Chicken: public Pet {
    int numEggsLaid;

    public:
        Chicken();
        Chicken(const Chicken&);
        Chicken(string, string, Toy*, int, int, int, int);
        ~Chicken();

        void setNumEggsLaid(int);
        int getNumEggsLaid();
};

#endif
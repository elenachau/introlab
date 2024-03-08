#ifndef PET_H
#define PET_H

#include "toy.h"

class Pet{
    protected:
        string name, species;
        int age, numToys, maxSize;
        Toy *ownedToys;
    
    public:
        Pet();
        Pet(string, string, int, Toy*, int, int);
        Pet(const Pet&);
        ~Pet();

        string getName();
        void setName(string);

        string getSpecies();
        void setSpecies(string);

        int getAge();
        void setAge(int);

        Toy* getOwnedToys();
        void addOwnedToy(Toy);

        int getNumToys();

        Pet& operator=(const Pet&);

        void resizeArray();
        void printPetData();
};

#endif
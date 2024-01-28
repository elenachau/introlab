#ifndef PET_H
#define PET_H
#define MAXSIZE 72

#include "toy.h"

class Pet {
    string name, species;
    int age, numToys;
    Toy ownedToys[MAXSIZE];

    public:
        Pet();
        Pet(string, string, int, int, Toy*);
        Pet(const Pet&);

        string getName();
        void setName(string);

        string getSpecies();
        void setSpecies(string);

        int getAge();
        void setAge(int);

        Toy* getOwnedToys();
        void addOwnedToy(Toy);
        int getNumToys();

        void printPetData();

};

#endif
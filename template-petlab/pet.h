#ifndef PET_H
#define PET_H

#include "toy.h"
#define MAX_TOYS 100

class Pet{
    protected: 
    string name;
    string species;
    int age;
    Toy *ownedToys; //dynamic allocation
    int numToys;
    float cost;

    public:
        Pet();
        Pet(const string, const string, const int, const Toy*, const int);
        Pet(const Pet&);
        ~Pet();

        const string getName();
        void setName(const string);

        const string getSpecies();
        void setSpecies(const string);

        const int getAge();
        void setAge(const int);

        const Toy* getOwnedToys();
        void addOwnedToy(const Toy);

        const int getNumToys();

        const float getCost();
        void setCost(const float);

        void printPetData();
        virtual void printPetUtterance() = 0; //virtual means any derived class inheriting from Pet must provide its implementation for this function
        virtual void calculatePetCost() = 0;
        virtual const int getIntValueFromChild() = 0;
};

#endif
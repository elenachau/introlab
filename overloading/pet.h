#ifndef PET_H
#define PET_H

#include "toy.h"

class Pet{
    protected:
        string name, species;
        int age, numToys, maxSize;
        Toy ownedToys[100];
        float cost;
    public:
        Pet();
        Pet(const string, const string, const int, const Toy*, const int, const int);
        Pet(const Pet&);

        string getName() const; //will not modify state of the obj
        void setName(const string);

        string getSpecies() const;
        void setSpecies(const string);

        int getAge() const;
        void setAge(const int);

        Toy* getOwnedToys();
        void addOwnedToy(const Toy);

        float getCost() const;
        void setCost(const float);

        int getNumToys() const;

        void calculatePetCost();

        //to access Pet private and protected members
        friend ostream& operator<<(ostream& out, const Pet& p); //Pet object to output
        friend ifstream& operator>>(ifstream& in, Pet& p);
};

#endif
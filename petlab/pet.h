#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet {
    string species;
    string name;

    public:
        Pet();
        Pet(string, string);
        Pet(const Pet&);

        string getSpecies();
        void setSpecies(string);

        string getName();
        void setName(string);
        void printPetData();
};

#endif // PET_H

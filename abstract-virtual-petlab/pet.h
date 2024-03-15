#ifndef PET_H
#define PET_H

#include "toy.h"

class Pet{
    protected:
        string name, species;
        int age, numToys, maxSize;
        Toy *ownedToys;
        float cost;

        public:
            Pet();
            Pet(const string, const string, const int, const Toy*, const int, const int);
            Pet(const Pet&);
            ~Pet();

            string getName() const;
            void setName(const string);

            string getSpecies() const;
            void setSpecies(const string);

            int getAge() const;
            void setAge(const int);

            Toy* getOwnedToys() const;
            void addOwnedToy(const Toy);

            float getCost() const;
            void setCost(const float);

            int getNumToys() const;

            Pet& operator=(const Pet&);

            void resizeArray();

            virtual void printPetData();
            virtual void printPetUtterance() = 0;
            virtual void calculatePetCost() = 0;
};

#endif
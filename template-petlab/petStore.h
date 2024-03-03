#ifndef PETSTORE_H
#define PETSTORE_H

using namespace std;
template <class T>

class PetStore {
    T **petStock; //a pointer to a pointer to type T
    int num;

    public:
        PetStore();
        PetStore(T*, int);
        PetStore(const PetStore&);
        ~PetStore();

        T** getPetStock();
        void addPetToStock(T*);

        int getNum();
};
#include "petStore.cpp" //ensure template class is instantiated in .h, to prevent linker errors

#endif
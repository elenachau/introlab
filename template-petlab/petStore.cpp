#include "petStore.h"

template<class T>
PetStore<T>::PetStore(){
    num = 0;
    petStock = new T*[1]; //array of pointers to type T
}


template<class T>
PetStore<T>::PetStore(T* stock, int n){
    petStock = new T*[n];
    num = n;
    for(int i = 0; i <  num; i++) {
        petStock[i] = stock[i]; //deep copy
    }
}

template<class T>
PetStore<T>::PetStore(const PetStore& rhs){
    petStock = new T*[rhs.num];
    num = rhs.num;

    for(int i = 0; i < rhs.num; i++) {
        petStock[i] = rhs.petStock[i];
    }
}

template<class T>
T** PetStore<T>::getPetStock(){
    return petStock;
}

template<class T>
void PetStore<T>::addPetToStock(T* petToAdd){
    T **tempPetStock = new T*[num];
    for(int i = 0; i < num; i++) {
        tempPetStock[i] = petStock[i];
    }
    delete[] petStock;
    petStock = new T*[num+1];
    for(int i = 0; i < num; i++) {
        petStock[i] = tempPetStock[i];
    }
    delete[] tempPetStock;
    petStock[num] = petToAdd;
    num++;
}

template<class T>
int PetStore<T>::getNum(){
    return num;
}

template<class T>
PetStore<T>::~PetStore(){
    delete[] petStock;
}

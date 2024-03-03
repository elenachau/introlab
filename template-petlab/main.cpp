#include "cat.h"
#include "chicken.h"
#include "petStore.h"

#define STARTSIZE 2

template <typename T>
void displayData(T data);

int main(){
    PetStore<Pet> *store = new PetStore<Pet>;

    Toy catNip("Cat Nip", "Happy Cat", 3.99);
    Toy xylophone("Xylophone", "Vehomy", 9.99);
    Toy mirror("Chicken Mirror", "Vehomy", 11.99);

    Toy *catToys = new Toy[1]; //dynamically allocate
    catToys[0] = catNip;
    Toy *chickenToys = new Toy[2];
    chickenToys[0] = xylophone;
    chickenToys[1] = mirror;

    Cat Fluffernutter(7, "Fluffernutter", "Cat", 5, catToys, 1); //without instantiating pure virtual function, Cat would be considered abstract class and cannot be instantiated
    Chicken Hennifer(42, "Hennifer", "Chicken", 2, chickenToys, 2);

    store->addPetToStock(&Fluffernutter); //& for an array of pointers
    store->addPetToStock(&Hennifer);

    for(int i = 0; i < 2; i++){
        store->getPetStock()[i]->printPetData();
    }

    PetStore<Pet> *newStore = new PetStore<Pet>;

    *newStore = *store; //performs deep copy of PetStore object that store is pointing to; newStore will point to copy PetStore obj

    displayData("DUPLICATED SUCCESSFULLY");

    for(int i = 0; i < 2; i++) {
        newStore->getPetStock()[i]->printPetData();
        displayData(i);
    }

    cout << endl;

    return 0;
}

template<typename T>
void displayData(T data) {
    cout << data << endl;
}
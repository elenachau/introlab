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

    Cat Fluffernutter(7, "Fluffernutter", "Cat", 5, catToys, 1);
    Chicken Hennifer(42, "Hennifer", "Chicken", 2, chickenToys, 2);
}

template<typename T>
void displayData(T data) {
    cout << data << endl;
}
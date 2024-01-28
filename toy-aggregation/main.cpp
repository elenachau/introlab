#include "pet.h"

int main() {
    Toy Ball("Ball"), CatNip("Cat Nip"), Tug("Tug Toy");

    Toy dogToys[2] = {Ball, Tug}; //array of Toys
    Pet Gaston("Gaston", "Dog", 8, 2, dogToys);
    Gaston.printPetData();

    Toy dragonToys[1];
    Pet Puff("Puff", "Dragon", 3, 0, dragonToys);
    Puff.printPetData();

    Toy catToys[1] = {CatNip};
    Pet Fluffernutter("Fluffernutter", "Cat", 5, 1, catToys);
    Fluffernutter.printPetData();

    return 0;

}
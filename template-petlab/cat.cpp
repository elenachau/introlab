#include "cat.h"

Cat::Cat():Pet() {
    numLives = 9;
}

Cat::Cat(const int num, const string nm, const string spec, const int ageVal, const Toy* toyArr, const int numT) : Pet(nm, spec, ageVal, toyArr, numT){
    numLives = num;
    calculatePetCost(); //Pet constructor executed before Cat constructor
}

Cat::Cat(const Cat& newCat){
    numLives = newCat.numLives;
    name = newCat.name;
    species = newCat.species;
    age = newCat.age;
    numToys = newCat.numToys;
    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = newCat.ownedToys[i];
    }
}

const int Cat::getNumLives(){
    return numLives;
}

void Cat::setNumLives(const int num){
    numLives = num;
}

void Cat::printPetUtterance(){
    cout << "\"Meow\"";
}

void Cat::calculatePetCost(){
    cost = numLives*5.25;
    for(int i = 0; i < numToys; i++) {
        cost += ownedToys[i].getCost();
    }
}

const int Cat::getIntValueFromChild(){
    return numLives;
}

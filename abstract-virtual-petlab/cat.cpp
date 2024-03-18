#include "cat.h"

Cat::Cat(){
    numLives = 9;
}

Cat::Cat(const int num, const string n, const string s, const int a, const Toy* toyArr, const int nt, const int max){
    numLives = num;
    calculatePetCost();
}

Cat::Cat(const Cat& rhs){
    numLives = rhs.numLives;
    name = rhs.name;
    species = rhs.species;
    calculatePetCost();
    numToys = rhs.numToys;
    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = rhs.ownedToys[i];
    }
}


int Cat::getNumLives() const{
    return numLives;
}

void Cat::setNumLives(const int num){
    numLives = num;
}


void Cat::printPetUtterance(){
    cout << "\"Meow\"";
}

void Cat::calculatePetCost(){
    cost = numLives * 5.25;
    for(int i = 0; i < numToys; i++){
        cost += ownedToys[i].getCost();
    }
}

void Cat::printPetData(){
    Pet::printPetData();
    printPetUtterance();
    cout << "\nNum Lives Remaining: " << numLives << endl;
}

#include "chicken.h"

Chicken::Chicken():Pet(){ //specify base class Pet for inheritance
    numEggs = -1;
}

Chicken::Chicken(const int num, const string nm, const string spec, const int ageVal, const Toy* toyArr, const int numT){
    numEggs = num;
    calculatePetCost();
}

Chicken::Chicken(const Chicken& rhs){
    numEggs = rhs.numEggs;
    name = rhs.name;
    species = rhs.species;
    age = rhs.age;
    
    for(int i = 0; i < rhs.numToys; i++){
        ownedToys[i] = rhs.ownedToys[i];
    }
    numToys = rhs.numToys;
}


const int Chicken::getNumEggsLaid(){
    return numEggs;
}

void Chicken::setNumEggsLaid(const int val){
    numEggs = val;
}

void Chicken::printPetUtterance(){
    cout << "\"Bawk\"" << endl;
}

void Chicken::calculatePetCost(){
    if(numEggs == 0) {
        cost = 3.55;
    }
    else {
        cost = 3.55 + (.5*numEggs);
    }

    for(int i = 0; i < numToys; i++) {
        cost += ownedToys[i].getCost();
    }
}

const int Chicken::getIntValueFromChild(){
    return numEggs;
}


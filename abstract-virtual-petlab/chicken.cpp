#include "chicken.h"

Chicken::Chicken():Pet(){
    numEggsLaid = 0;
}

Chicken::Chicken(const Chicken& rhs): Pet(rhs){
    numEggsLaid = rhs.numEggsLaid;
    calculatePetCost();
}

Chicken::Chicken(const string n, const string s, const Toy* o, const int a, const int ct, const int max, const int num): Pet(n, s, a, o, ct, max){
    numEggsLaid = num;
    calculatePetCost();
}

void Chicken::setNumEggsLaid(const int n){
    numEggsLaid = n;
}

int Chicken::getNumEggsLaid() const{
    return numEggsLaid;
}

void Chicken::printPetData(){
    Pet::printPetData(); //inheritance
    printPetUtterance();
    cout << "Num Eggs Laid: " << numEggsLaid << endl;
}

void Chicken::printPetUtterance(){
    cout << "\"Bawk\"" << endl;
}

void Chicken::calculatePetCost(){
    float baseCost = 3.55;
    float eggCost = numEggsLaid * .50;
    baseCost += eggCost;
    for(int i = 0; i < numToys; i++) {
        baseCost += ownedToys[i].getCost();
    }
    cost = baseCost;
}

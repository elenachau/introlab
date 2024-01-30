#include "pet.h"

Pet::Pet(){
    name = "Pupperoni";
    species = "Dragon";
    age = -1;
    numToys = 0;
    maxSize = 1;
    cost = 0;
}

Pet::Pet(const string n, const string s, const int a, const Toy* toyArr, const int ms, const int c){
    name = n;
    species = s;
    age = a;
    numToys = c;
    maxSize = ms;
    for(int i = 0; i < c; i++) {
        ownedToys[i] = toyArr[i];
    }
    calculatePetCost();
}

Pet::Pet(const Pet& rhs){
    name = rhs.name;
    species = rhs.species;
    age = rhs.age;
    numToys = rhs.numToys;
    maxSize = rhs.maxSize;
    cost = rhs.cost;
    calculatePetCost();
}

string Pet::getName() const {
    return name;
}

void Pet::setName(const string newName){
    name = newName;
}


string Pet::getSpecies() const{
    return species;
}

void Pet::setSpecies(const string newSpecies){
    species = newSpecies;
}


int Pet::getAge() const{
    return age;
}

void Pet::setAge(const int newAge){
    age = newAge;
}


Toy* Pet::getOwnedToys(){
    return ownedToys;
}

void Pet::addOwnedToy(const Toy newToy){
    ownedToys[numToys] = newToy;
    numToys++;
}


float Pet::getCost() const{
    return cost;
}

void Pet::setCost(const float newCost){
    cost = newCost;
}


int Pet::getNumToys() const{
    return numToys;
}


void Pet::calculatePetCost(){
    float temp = ownedToys[0].getCost();
    for(int i = 1; i < numToys; i++) {
        temp = ownedToys[i] + temp;
    }

    cost = temp;
}
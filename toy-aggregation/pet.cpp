#include "pet.h"

Pet::Pet(){
    name = "Pupperoni";
    species = "Dragon";
    age = -1;
    numToys = 0;
}

Pet::Pet(string n, string s, int a, int nt, Toy* toys){
    name = n;
    species = s;
    age = a;
    numToys = nt;
    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = toys[i];
    }
}

Pet::Pet(const Pet& rhs){
    name = rhs.name;
    species = rhs.species;
    age = rhs.age;
    numToys = rhs.numToys;
    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = rhs.ownedToys[i];
    }
}


string Pet::getName(){
    return name;
}

void Pet::setName(string n){
    name = n;
}


string Pet::getSpecies(){
    return species;
}

void Pet::setSpecies(string s){
    species = s;
}


int Pet::getAge(){
    return age;
}

void Pet::setAge(int a){
    age = a;
}


Toy* Pet::getOwnedToys(){
    return ownedToys;
}

void Pet::addOwnedToy(Toy newToy){
    ownedToys[numToys] = newToy;
    numToys++;
}

int Pet::getNumToys(){
    return numToys;
}


void Pet::printPetData(){
    cout << getName() << " " << getSpecies() << " " << getAge() << endl;
    cout << "====Toys====" << endl;
    for(int i = 0; i < numToys; i++) {
        ownedToys[i].displayToy();
    }
    cout << endl;
}

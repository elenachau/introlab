#include "pet.h"

Pet::Pet(){
    name = "Pupperoni";
    species = "Dragon";
    age = -1;
    numToys = 0;
    maxSize = 1;
    ownedToys = new Toy[maxSize];
}

Pet::Pet(string n, string s, int a, Toy* toyArr, int nt, int ms){
    name = n;
    species = s;
    age = a;
    numToys = nt;
    maxSize = ms;
    ownedToys = new Toy[maxSize];
    for(int i = 0; i < nt; i++) {
        ownedToys[i] = toyArr[i];
    }
}

Pet::Pet(const Pet& rhs){
    name = rhs.name;
    species = rhs.species;
    age = rhs.age;
    numToys = rhs.numToys;
    maxSize = rhs.maxSize;
    ownedToys = new Toy[maxSize];
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

void Pet::resizeArray(){
    // Toy *temp = new Toy[maxSize*2];
    maxSize *= 2;
    Toy* temp = new Toy[maxSize];

    for(int i = 0; i < numToys; i++){
        temp[i] = ownedToys[i];
    }
    delete[] ownedToys;
    ownedToys = temp;
}

void Pet::addOwnedToy(Toy newToy){
    if(numToys == maxSize) {
        resizeArray();
    }
    ownedToys[numToys] = newToy;
    numToys++;
}


int Pet::getNumToys(){
    return numToys;
}

void Pet::printPetData(){
    cout << endl << getName() << " " << getSpecies() << " " << getAge() << endl;
    cout << "====Toys====" << endl;

    if(numToys > 0){
        for(int i = 0; i < numToys; i++) {
            ownedToys[i].displayToy();
        }
    }
    else {
        cout << "NONE" << endl;
    }
}

Pet& Pet::operator=(const Pet& rhs){
    name = rhs.name;
    species = rhs.species;
    age = rhs.age;
    numToys = rhs.numToys;
    maxSize = rhs.maxSize;
    ownedToys = new Toy[maxSize];

    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = rhs.ownedToys[i];
    }
    return *this;
}

Pet::~Pet(){
    delete[] ownedToys;
}
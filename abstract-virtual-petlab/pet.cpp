#include "pet.h"

Pet::Pet(){
    name = "Pupperoni";
    species = "Dragon";
    age = -1;
    numToys = 0;
    maxSize = 1;
    cost = 0;
    ownedToys = new Toy[maxSize];
}

Pet::Pet(const string n, const string s, const int a, const Toy* toyArr, const int nt, const int max){
    name = n;
    species = s;
    age = a;
    numToys = nt;
    maxSize = max;
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

string Pet::getName() const{
    return name;
}

void Pet::setName(const string n){
    name = n;
}

string Pet::getSpecies() const{
    return species;
}

void Pet::setSpecies(const string s){
    species = s;
}

int Pet::getAge() const{
    return age;
}

void Pet::setAge(const int a){
    age = a;
}


Toy* Pet::getOwnedToys() const{
    return ownedToys;
}

void Pet::addOwnedToy(const Toy newToy){
    if(numToys == maxSize){
        resizeArray();
    }
    ownedToys[numToys] = newToy;
    numToys++;
}

float Pet::getCost() const{
    return cost;
}

void Pet::setCost(const float c){
    cost = c;
}

int Pet::getNumToys() const{
    return numToys;
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
    
    return *this; //reference to current object itself
}

void Pet::resizeArray(){
    Toy *temp = new Toy[maxSize*2];
    maxSize *= 2;
    for(int i = 0; i < numToys; i++){
        temp[i] = ownedToys[i];
    }
    delete[] ownedToys;
    ownedToys = temp;
}

void Pet::printPetData(){
    cout << endl << getName() << " " << getSpecies() << " " << getAge() << endl;
    cout << "====Toys====" << endl;
    if(numToys > 0) {
        for(int i = 0; i < numToys; i++) {
            ownedToys[i].displayToy();
        }
    }
    else{
        cout << "none" << endl;
    }

    cout << "Total Cost: $" << cost << endl;
    cout << "I say: ";
}

Pet::~Pet(){
    delete[] ownedToys;
}
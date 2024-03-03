#include "pet.h"

Pet::Pet(){
    name = "Pupperoni";
    species = "Dragon";
    age = -1;
    numToys = 0;
    cost = -1.45;
    ownedToys = new Toy[MAX_TOYS];
}

Pet::Pet(const string n, const string s, const int a, const Toy* nt, const int c){
    name = n;
    species = s;
    age = a;
    numToys = c;
    ownedToys = new Toy[numToys];
    for(int i = 0; i < c; i++) {
        ownedToys[i] = nt[i];
    }
}

Pet::Pet(const Pet& rhs){
    name = rhs.name;
    species = rhs.species;
    age = rhs.age;
    numToys = rhs.numToys;
    ownedToys = new Toy[numToys];
    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = rhs.ownedToys[i];
    }
}

const string Pet::getName(){
    return name;
}

void Pet::setName(const string n){
    name = n;
}


const string Pet::getSpecies(){
    return species;
}

void Pet::setSpecies(const string s){
    species = s;
}


const int Pet::getAge(){
    return age;
}

void Pet::setAge(const int a){
    age = a;
}


const Toy* Pet::getOwnedToys(){
    return ownedToys; //pointer to first element to access other elements within the contiguous memory of array
}

void Pet::addOwnedToy(const Toy newToy) {
    Toy* tempArr = new Toy[numToys];
    for(int i = 0; i < numToys; i++) {
        tempArr[i] = ownedToys[i];
    }
    delete[] ownedToys;
    ownedToys = new Toy[numToys + 1];
    for(int i = 0; i < numToys; i++) {
        ownedToys[i] = tempArr[i];
    }
    delete[] tempArr;
    ownedToys[numToys] = newToy;
    numToys++;
}


const int Pet::getNumToys(){
    return numToys;
}


const float Pet::getCost(){
    return cost;
}

void Pet::setCost(const float c){
    cost = c;
}


void Pet::printPetData(){
    cout << endl << getName() << " " << getSpecies() << " " << getAge() << endl;
    cout << "====Toys====" << endl;
    if(numToys > 0) {
        for(int i = 0; i < numToys; i++) {
            ownedToys[i].displayToy();
        }
    }
    else {
        cout << "none" << endl;
    }

    cout << endl << "Total Cost: $" << cost << endl;
    cout << "I say: ";
    printPetUtterance(); //interpreted by each child
    if(species == "Chicken") {
        cout << endl << "Number of Eggs Laid: ";
    }
    else if(species == "Cat") {
        cout << endl << "Number of Lives Left: ";
    }
    cout << getIntValueFromChild() << endl;
    cout << endl;
}

Pet::~Pet(){
    delete[] ownedToys; //free toy array memory
}
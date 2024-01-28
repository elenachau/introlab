#include "pet.h"

// string species;
// string name;

Pet::Pet(){
    species = "none";
    name = "none";
}

Pet::Pet(string s, string n){
    species = s;
    name = n;
}

Pet::Pet(const Pet& p){
    species = p.species;
    name = p.name;
}

void Pet::setSpecies(string s){
    species = s;
}

string Pet::getSpecies(){
    return species;
}

string Pet::getName(){
    return name;
}

void Pet::setName(string n){
    name = n;
}

void Pet::printPetData(){
    cout << name << " " << species << endl;
}
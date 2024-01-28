#include "toy.h"

Toy::Toy(){
    toyName = "none";
}

Toy::Toy(string n){
    toyName = n;
}

Toy::Toy(const Toy& rhs){
    toyName = rhs.toyName;
}

void Toy::setToyName(string n){
    toyName = n;
}

string Toy::getToyName(){
    return toyName;
}

void Toy::displayToy(){
    cout << toyName << endl;
}

#include "toy.h"

Toy::Toy(){
    toyName = "none";
    brand = "none";
    cost = -4.2;
}

Toy::Toy(const string n, const string product, const float c){
    toyName = n;
    brand = product;
    cost = c;
}

Toy::Toy(const Toy& rhs){
    toyName = rhs.toyName;
    brand = rhs.brand;
    cost = rhs.cost;
}


const string Toy::getToyName(){
    return toyName;
}

const string Toy::getBrand(){
    return brand;
}

const float Toy::getCost(){
    return cost;
}


void Toy::setToyName(const string n){
    toyName = n;
}

void Toy::setBrand(const string product){
    brand = product;
}

void Toy::setCost(const float c){
    cost = c;
}


void Toy::displayToy(){
    cout << brand << " " << toyName << ": $" << cost << endl;
}

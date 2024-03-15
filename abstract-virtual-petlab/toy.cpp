#include "toy.h"

Toy::Toy(){
    toyName = "none";
    brand = "none";
    cost = -4.2;
}

Toy::Toy(const string n, const string b, const float c){
    toyName = n;
    brand = b;
    cost = c;
}

Toy::Toy(const Toy& rhs){
    toyName = rhs.toyName;
    brand = rhs.brand;
    cost = rhs.cost;
}


string Toy::getToyName() const{
    return toyName;
}

string Toy::getBrand() const{
    return brand;
}

float Toy::getCost() const{
    return cost;
}


void Toy::setToyName(const string n){
    toyName = n;
}

void Toy::setBrand(const string b){
    brand = b;
}

void Toy::setCost(const float c){
    cost = c;
}


void Toy::displayToy(){
    cout << brand << " " << toyName << ": " << cost << endl;
}

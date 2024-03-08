#include "toy.h"

Toy::Toy(){
    toyName = "none";
    brand = "none";
    cost = -4.2;
}

Toy::Toy(string n, string b, float c){
    toyName = n;
    brand = b;
    cost = c;
}

Toy::Toy(const Toy& rhs){
    toyName = rhs.toyName;
    brand = rhs.brand;
    cost = rhs.cost;
}

string Toy::getToyName(){
    return toyName;
}

string Toy::getBrand(){
    return brand;
}

float Toy::getCost(){
    return cost;
}

void Toy::setToyName(string tn){
    toyName = tn;
}

void Toy::setBrand(string b){
    brand = b;
}

void Toy::setCost(float c){
    cost = c;
}

void Toy::displayToy(){
    cout << brand << " " << toyName << ": " << cost << endl;
}
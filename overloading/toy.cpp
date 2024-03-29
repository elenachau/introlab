#include "toy.h"

Toy::Toy() {
    toyName = "none";
    brand = "none";
    cost = -4.2;
}

Toy::Toy(const string tn, const string b, const float c){
    toyName = tn;
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

void Toy::setToyName(const string tn){
    toyName = tn;
}
void Toy::setBrand(const string b){
    brand = b;
}
void Toy::setCost(const float c){
    cost = c;
}

void Toy::displayToy()const{ //make displayToy const, using displayToy for operator<<
    cout << brand << " " << toyName << ": " << cost << endl;
}

float Toy::operator+(const float& t){ //specifying Toy::operator+ expects a Toy obj for the left operand
    float temp = cost + t;
    return temp;
}

Toy& Toy::operator-(const Toy& t){ //return reference to Toy object
    Toy* newToy = new Toy; //allocates memory of new Toy object, assigning to ptr
    newToy->setCost(cost-t.cost);
    return *newToy;
}

//alt
// Toy Toy::operator-(const Toy& t) const {
//     Toy newToy = *this; //create a copy of the current object
//     newToy.setCost(cost - t.cost);
//     return newToy;
// }

void Toy::operator*=(const float tax){
    cost*=tax;
}
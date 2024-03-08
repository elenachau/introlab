#ifndef TOY_H
#define TOY_H

#include <iostream>
using namespace std;

class Toy{
    string toyName, brand;
    float cost;

    public:
        Toy();
        Toy(string, string, float);
        Toy(const Toy&);

        string getToyName();
        string getBrand();
        float getCost();

        void setToyName(string);
        void setBrand(string);
        void setCost(float);

        void displayToy();
};

#endif
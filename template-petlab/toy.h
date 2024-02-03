#ifndef TOY_H
#define TOY_H

#include <iostream>
using namespace std;

class Toy {
    string toyName, brand;
    float cost;

    public:
        Toy();
        Toy(const string, const string, const float);
        Toy(const Toy&);

        const string getToyName();
        const string getBrand();
        const float getCost();

        void setToyName(const string);
        void setBrand(const string);
        void setCost(const float);

        void displayToy();
};

#endif
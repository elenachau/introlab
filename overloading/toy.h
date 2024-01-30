#ifndef TOY_H
#define TOY_H

#include <iostream>
using namespace std;

class Toy{
    string toyName, brand;
    float cost;

    public:
        Toy();
        Toy(const string, const string, const float);
        Toy(const Toy&);

        string getToyName() const;
        string getBrand() const;
        float getCost() const;

        void setToyName(const string);
        void setBrand(const string);
        void setCost(const float);

        void displayToy()const;

        float operator+(const float&);
        Toy& operator-(const Toy&);
        void operator*=(const float);

};

#endif
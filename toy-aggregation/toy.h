#ifndef TOY_H
#define TOY_H

#include <iostream>
using namespace std;

class Toy {
    string toyName;

    public:
        Toy();
        Toy(string);
        Toy(const Toy&);

        void setToyName(string);
        string getToyName();
        void displayToy();

};

#endif
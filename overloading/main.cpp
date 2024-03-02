#include "pet.h"

#include <fstream>
#define STARTSIZE 2

int main(){
    Toy catNip( "Cat Nip","Happy Cat", 3.99);
    Toy xylophone("Xylophone", "Vehomy", 9.99);
    Toy mirror("Chicken Mirror", "Vehomy", 11.99);

    Toy catToys[1] ; //dynamically allocate
    catToys[0] = catNip;
    Toy chickenToys[2];
    chickenToys[0] = xylophone;
    chickenToys[1] = mirror;

    Pet Fluffernutter("Fluffernutter", "Cat", 5, catToys, 1, 1);
    Pet Hennifer("Hennifer", "Chicken", 2, chickenToys, 2, 2);

    cout << "The cost of the chicken toy is: " << mirror + xylophone.getCost() << endl;
    Toy temp = mirror - xylophone;
    cout << "Subtraction: " << temp.getCost() << endl;
    mirror*=1.0825;
    cout << "With Tax: " << mirror.getCost();

    cout << endl << Fluffernutter;
    cout << Hennifer;

    ifstream in("data.txt");

    Pet cat;
    Pet chicken;

    in >> cat;
    in >> chicken;

    cout << cat;
    cout << chicken;

    return 0;
}

//for a const object like Pet& p, ensure other member functions e.g. displayToy you call on it are also declared const
ostream& operator<<(ostream& out, const Pet& p) { //to write
    out << endl << p.name << " " << p.species << " " << p.age << endl;
    out << "====Toys====" << endl;
    if(p.numToys > 0) {
        for(int i = 0; i < p.numToys; i++) {
            p.ownedToys[i].displayToy();
        }
    }
    else {
        out << "none" << endl;
    }

    out << "Total Cost: $" << p.cost << endl;
    return out;
}

ifstream& operator>>(ifstream& in, Pet& p) {
    in >> p.name >> p.species >> p.age;
    return in;
}


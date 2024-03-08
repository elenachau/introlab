#include "chicken.h"

Chicken::Chicken():Pet(){
    numEggsLaid = 0;
}

Chicken::Chicken(const Chicken& rhs):Pet(rhs){
    numEggsLaid = rhs.numEggsLaid;
}

Chicken::Chicken(string n, string s, Toy* o, int a, int ct, int max, int num):Pet(n, s, a, o, ct, max){
    numEggsLaid = num;
}

void Chicken::setNumEggsLaid(int n){
    numEggsLaid = n;
}

int Chicken::getNumEggsLaid(){
    return numEggsLaid;
}

Chicken::~Chicken(){

}
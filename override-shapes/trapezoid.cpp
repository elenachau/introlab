#include "trapezoid.h"

Trapezoid::Trapezoid(){
    base1 = 0;
    base2 = 0;
    height = 0;
    side1 = 0;
    side2 = 0;
    numSides = 0;
    sides[0] = base1;
    sides[1] = base2;
    sides[2] = side1;
    sides[3] = side2;
    sides[4] = height;
}

Trapezoid::Trapezoid(float b1, float b2, float h, float s1, float s2){
    base1 = b1;
    base2 = b2;
    height = h;
    side1 = s1;
    side2 = s2;
    numSides = 5;
    sides[0] = base1;
    sides[1] = base2;
    sides[2] = side1;
    sides[3] = side2;
    sides[4] = height;
    calcPerimeter();
    calcArea();
}

Trapezoid::Trapezoid(const Trapezoid& rhs){
    base1 = rhs.base1;
    base2 = rhs.base2;
    height = rhs.height;
    side1 = rhs.side1;
    side2 = rhs.side2;
    numSides = 5;
    sides[0] = base1;
    sides[1] = base2;
    sides[2] = side1;
    sides[3] = side2;
    sides[4] = height;
    perimeter = rhs.perimeter;
    area = rhs.area;
}

float Trapezoid::getSide1(){
    return side1;
}

float Trapezoid::getSide2(){
    return side2;
}

float Trapezoid::getBase1(){
    return base1;
}

float Trapezoid::getBase2(){
    return base2;
}

float Trapezoid::getHeight(){
    return height;
}


void Trapezoid::setSides(float b1, float b2, float s1, float s2){
    base1 = b1;
    base2 = b2;
    side1 = s1;
    side2 = s2;
}

void Trapezoid::setSide1(float s1){
    side1 = s1;
}

void Trapezoid::setSide2(float s2){
    side2 = s2;
}

void Trapezoid::setBase1(float b1){
    base1 = b1;
}

void Trapezoid::setBase2(float b2){
    base2 = b2;
}

void Trapezoid::setHeight(float h){
    height = h;
}

void Trapezoid::calcArea(){
    area = ((base1 + base2) * height) / 2;
}


void Trapezoid::calcPerimeter(){
    float temp = 0;
    for(int i = 0; i < 4; i++) { //ignore element 5 which is height
        temp += sides[i];
    }
    perimeter = temp;
}

Trapezoid::~Trapezoid(){
    cout<< "trapezoid" << endl;
    delete[] sides;
}
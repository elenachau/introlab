#include "triangle.h"
#include <math.h>

Triangle::Triangle(){
    side1 = 0;
    side2 = 0;
    side3 = 0;
    numSides = 3;
    sides[0] = side1;
    sides[1] = side2;
    sides[2] = side3;
    area = 0;
    perimeter = 0;
}

Triangle::Triangle(float b, float len1, float len2){
    side1 = b;
    side2 = len1;
    side3 = len2;
    numSides = 3;
    sides[0] = side1;
    sides[1] = side2;
    sides[2] = side3;
    calcArea();
    calcPerimeter();
}

Triangle::Triangle(const Triangle& rhs){
    side1 = rhs.side1;
    side2 = rhs.side2;
    side3 = rhs.side3;
    numSides = 3;
    sides[0] = side1;
    sides[1] = side2;
    sides[2] = side3;
    area = rhs.area;
    perimeter = rhs.perimeter;
}


float Triangle::getSide1(){
    return side1;
}

float Triangle::getSide2(){
    return side2;
}

float Triangle::getSide3(){
    return side3;
}


void Triangle::setSide1(float base){
    side1 = base;
}

void Triangle::setSide2(float len1){
    side2 = len1;
}

void Triangle::setSide3(float len2){
    side3 = len2;
}

void Triangle::calcArea(){
    float sVal = (side1 + side2 + side3) / 2;
    area = sqrt(sVal*(sVal-side1)*(sVal-side2)*(sVal-side3));
}

Triangle::~Triangle(){
    cout << "triangle" << endl;
    delete[] sides;
}


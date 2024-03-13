#include "shape.h"

Shape::Shape(){
    perimeter = 0;
    area = 0;
    numSides = 0;
    maxSides = 1;
    sides = new float[maxSides];
}

Shape::Shape(int n, int m, float* s){
    numSides = n;
    maxSides = m;
    sides = new float[maxSides];

    for(int i = 0; i < numSides; i++){
        sides[i] = s[i];
    }
}

Shape::Shape(const Shape& rhs){
    perimeter = rhs.perimeter;
    area = rhs.area;
    numSides = rhs.numSides;
    maxSides = rhs.maxSides;
    sides = new float[maxSides];

    for(int i = 0; i < numSides; i++) {
        sides[i] = rhs.sides[i];
    }
}


float Shape::getPerimeter(){
    return perimeter;
}

float Shape::getArea(){
    return area;
}

void Shape::setPerimeter(float p){
    perimeter = p;
}

void Shape::setArea(float a){
    area = a;
}


float* Shape::getSides(){
    return sides;
}

int Shape::getNumSides(){
    return numSides;
}

int Shape::getMaxSides(){
    return maxSides;
}

void Shape::resizeSides(){
    float* temp = new float[numSides];
    for(int i = 0; i < numSides; i++) {
        temp[i] = sides[i];
    }
    delete[] sides;
    sides = new float[numSides*2];
    maxSides *= 2;
    for(int i = 0; i < numSides; i++) {
        sides[i] = temp[i];
    }
    delete[] temp;

}

void Shape::addSide(float s){
    if(maxSides == numSides) {
        resizeSides();
    }
    sides[numSides] = s;
    numSides++;
}


Shape& Shape::operator=(const Shape& rhs){
    perimeter = rhs.perimeter;
    area = rhs.area;
    numSides = rhs.numSides;
    maxSides = rhs.maxSides;
    sides = new float[maxSides];

    for(int i = 0; i < numSides; i++) {
        sides[i] = rhs.sides[i];
    }

    return *this;
}

void Shape::calcPerimeter(){
    float temp = 0;
    for(int i = 0; i < numSides; i++) {
        temp += sides[i];
    }

    perimeter = temp;
}

Shape::~Shape(){
    cout << "shape" << endl;
}
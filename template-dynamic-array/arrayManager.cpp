#include "arrayManager.h"

ArrayManager::ArrayManager(){
    numInts = 0;
    numFloats = 0;
    numFractions = 0;
    maxNumInts = maxNumFloats = maxNumFractions = 2;

    integers = new int[maxNumInts];
    floats = new float[maxNumFloats];
    fractions = new Fraction[maxNumFractions];
}

ArrayManager::ArrayManager(int* ints, int num){
    numInts = num;
    maxNumInts = num;
    integers = new int[maxNumInts];

    for(int i = 0; i < numInts; i++) {
        integers[i] = ints[i];
    }
}

ArrayManager::ArrayManager(float* flts, int num){
    numFloats = num;
    maxNumFloats = num;
    floats = new float[maxNumFloats];

    for(int i = 0; i < numFloats; i++) {
        floats[i] = flts[i];
    }
}

ArrayManager::ArrayManager(Fraction* frac, int num){
    numFractions = num;
    maxNumFractions = num;
    fractions = new Fraction[maxNumFractions];

    for(int i = 0; i < numFractions; i++) {
        fractions[i] = frac[i];
    }
}

ArrayManager::ArrayManager(int* ints, float* flts, Fraction* fracs, int numI, int numF, int numFr){
    maxNumInts = numInts = numI;
    maxNumFloats = numFloats = numF;
    maxNumFractions = numFractions = numFr;

    integers = new int[maxNumInts];
    floats = new float[maxNumFloats];
    fractions = new Fraction[maxNumFractions];

    for(int i = 0; i < numInts; i++) {
        integers[i] = ints[i];
    }
    for(int i = 0; i < numFloats; i++) {
        floats[i] = flts[i];
    }
    for(int i = 0; i < numFractions; i++) {
        fractions[i] = fracs[i];
    }
}

ArrayManager::ArrayManager(const ArrayManager& rhs){
    numInts = rhs.numInts;
    numFloats = rhs.numFloats;
    numFractions = rhs.numFractions;

    maxNumInts = rhs.maxNumInts;
    maxNumFloats = rhs.maxNumFloats;
    maxNumFractions = rhs.maxNumFractions;

    integers = new int[rhs.numInts];
    floats = new float[rhs.numFloats];
    fractions = new Fraction[rhs.numFractions];

    for(int i = 0; i < rhs.numInts; i++) {
        integers[i] = rhs.integers[i];
    }
    for(int i = 0; i < rhs.numFloats; i++) {
        floats[i] = rhs.floats[i];
    }
    for(int i = 0; i < rhs.numFractions; i++) {
        fractions[i] = rhs.fractions[i];
    }
}

int* ArrayManager::getIntegers(){
    return integers;
}

float* ArrayManager::getFloats(){
    return floats;
}

Fraction* ArrayManager::getFractions(){
    return fractions;
}


int ArrayManager::getNumFloats(){
    return numFloats;
}

int ArrayManager::getNumInts(){
    return numInts;
}

int ArrayManager::getNumFractions(){
    return numFractions;
}

int ArrayManager::getMaxNumFloats(){
    return maxNumFloats;
}

int ArrayManager::getMaxNumInts(){
    return maxNumInts;
}

int ArrayManager::getMaxNumFractions(){
    return maxNumFractions;
}


void ArrayManager::addToArr(int a){
    if(numInts >= maxNumInts) {
        maxNumInts += 1;
        int* temp = new int[maxNumInts];
        for(int i = 0; i < numInts; i++) {
            temp[i] = integers[i];
        }
        delete[] integers;
        integers = temp;
    }

    integers[numInts] = a;
    numInts++;
}

void ArrayManager::addToArr(float a){
    if(numFloats >= maxNumFloats) {
        maxNumFloats += 1;
        float* temp = new float[maxNumFloats];
        for(int i = 0; i < numFloats; i++) {
            temp[i] = floats[i];
        }
        delete[] floats;
        floats = temp;
    }

    floats[numFloats] = a;
    numFloats++;
}

void ArrayManager::addToArr(Fraction a){
    if(numFractions >= maxNumFractions) {
        maxNumFractions += 1;
        Fraction* temp = new Fraction[maxNumFractions];
        for(int i = 0; i < numFractions; i++) {
            temp[i] = fractions[i];
        }
        delete[] fractions;
        fractions = temp;
    }
    fractions[numFractions] = a;
    numFractions++;
}

ArrayManager::~ArrayManager(){
    if(numInts > 0) {
        delete[] integers;
    }
    if(numFloats > 0){
        delete[] floats;
    }
    if(numFractions > 0){
        delete[] fractions;
    }
}

ArrayManager& ArrayManager::operator=(const ArrayManager& rhs){
    numInts = rhs.numInts;
    numFloats = rhs.numFloats;
    numFractions = rhs.numFractions;

    maxNumInts = rhs.maxNumInts;
    maxNumFloats = rhs.maxNumFloats;
    maxNumFractions = rhs.maxNumFractions;

    integers = new int[rhs.numInts];
    floats = new float[rhs.numFloats];
    fractions = new Fraction[rhs.numFractions];

    for(int i = 0; i < rhs.numInts; i++){
        integers[i] = rhs.integers[i];
    }
    for(int i = 0; i < rhs.numFloats; i++){
        floats[i] = rhs.floats[i];
    }
    for(int i = 0; i < rhs.numFractions; i++){
        fractions[i] = rhs.fractions[i];
    }

    return *this; //dereference (or access object) left hand operand, to then return a reference to the current object itself
}

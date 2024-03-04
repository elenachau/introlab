#ifndef MODIFIEDCALCULATOR_H
#define MODIFIEDCALCULATOR_H
#define MAX_ARR_SIZE 100

#include "fraction.h"

class ArrayManager{
    int* integers;
    float* floats;
    Fraction* fractions;
    int numInts, numFloats, numFractions, maxNumInts, maxNumFloats, maxNumFractions;

    public:
        ArrayManager();
        ArrayManager(int*, int);
        ArrayManager(float*, int);
        ArrayManager(Fraction*, int);
        ArrayManager(int*, float*, Fraction*, int, int, int);
        ArrayManager(const ArrayManager&);

        int* getIntegers();
        float* getFloats();
        Fraction* getFractions();

        int getNumFloats();
        int getNumInts();
        int getNumFractions();
        int getMaxNumFloats();
        int getMaxNumInts();
        int getMaxNumFractions();

        void addToArr(int);
        void addToArr(float);
        void addToArr(Fraction);

        ~ArrayManager();
        ArrayManager& operator=(const ArrayManager&);
};

#endif
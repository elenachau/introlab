#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction{
    int numerator, denominator;

    public:
        Fraction();
        Fraction(int, int);
        Fraction(const Fraction&);

        int getNumerator();
        int getDenominator();

        void setNumerator(int);
        void setDenominator(int);
        int findGCF();

        void operator+=(Fraction);
        void operator*=(Fraction);
};

#endif
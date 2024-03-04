#include "arrayManager.h"
#include "helpers.h"

int main() {
    ArrayManager AM;
    for(int i = 0; i < 10; i++) {
        int newInt = 1;
        float newFloat = .5;
        Fraction newFraction(1,2);
        AM.addToArr(newInt);
        AM.addToArr(newFloat);
        AM.addToArr(newFraction);
    }

    int intSum = add<int>(AM.getIntegers(), AM.getNumInts());
    float floatSum = add<float>(AM.getFloats(), AM.getNumFloats());
    Fraction fracSum = add<Fraction>(AM.getFractions(), AM.getNumFractions());

    int intProd = multiply<int>(AM.getIntegers(), AM.getNumInts());
    float floatProd = multiply<float>(AM.getFloats(), AM.getNumFloats());
    Fraction fracProd = multiply<Fraction>(AM.getFractions(), AM.getNumFractions());

    cout << "Integer Array Sum: " << intSum <<endl;
    cout << "Float Array Sum: " << floatSum << endl;
    cout << "Fraction Array Sum: " << fracSum.getNumerator() << "/" << fracSum.getDenominator() << endl << endl;
    cout << "Integer Array Product: " << intProd << endl;
    cout << "Float Array Product: " << floatProd << endl;
    cout << "Fraction Array Product: " << fracProd.getNumerator() << "/" << fracProd.getDenominator() << endl << endl;

}
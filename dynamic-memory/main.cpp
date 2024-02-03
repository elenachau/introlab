#include "helpers.h"

int main() {
    int maxMonths = 1, numMonths = 0;

    Month* year = new Month[maxMonths];
    year = constructYear(year, numMonths, maxMonths);
    for(int i = 0; i < numMonths; i++) {
        cout << year[i];
    }

    return 0;
}
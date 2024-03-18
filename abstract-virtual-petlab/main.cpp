#include "chicken.h"
#include "cat.h"
#define MAXSIZE 72

int main(){
    Toy catNip( "Cat Nip","Happy Cat", 3.99);
    Toy xylophone("Xylophone", "Vehomy", 9.99);
    Toy mirror("Chicken Mirror", "Vehomy", 11.99);

    Toy* catToys = new Toy[1];
    catToys[0] = catNip;
    Toy* chickenToys = new Toy[2];
    chickenToys[0] = xylophone;
    chickenToys[1] = mirror;

    int numLives = 5;
    int numEggs = 2;
    Cat Fluffernutter(numLives, "Fluffernutter", "Cat", 5, catToys, 1, 1);
    Chicken Hennifer("Heniffer", "Chicken", chickenToys, 2, 2, 2, numEggs);
    
    Pet** petArr = new Pet*[2];
    petArr[0] = &Fluffernutter;
    petArr[1] = &Hennifer;

    for(int i = 0; i < 2; i++){
        petArr[i]->printPetData();
    }

    return 0;
}
#include "chicken.h"
#define MAXSIZE 100

int main(){
    Toy kongBall("Ball", "Kong", 12.99);
    Toy catNip("Cat Nip", "Happy Cat", 3.99);
    Toy rope("Tug Toy", "Happy Tails", 13.19);
    Toy xylophone("Xylophone", "Vehomy", 9.99);
    Toy mirror("Chicken Mirror", "Vehomy", 11.99);


    Toy* dogToys = new Toy[2]{kongBall, rope};
    Toy* catToys = new Toy[1]{catNip};
    Toy* chickenToys = new Toy[2]{xylophone, mirror};

    Toy* dogToys = new Toy[2];
    dogToys[0] = kongBall;
    dogToys[1] = rope;
    
    Toy* catToys = new Toy[1];
    catToys[0] = catNip;

    Toy* dragonToys = new Toy[1];
    Toy* chickenToys = new Toy[2];
    chickenToys[0] = xylophone;
    chickenToys[1] = mirror;

    Pet Gaston("Gaston", "Dog", 8, dogToys, 2, 2), Puff("Puff", "Dragon", 3, dragonToys, 0, 1);
    Pet Fluffernutter("Fluffernutter", "Cat", 5, catToys, 1, 1);
    Chicken Hennifer("Hennifer", "Chicken", chickenToys, 2, 2, 2, 2);
    Pet** petArr = new Pet*[4];

    for(int i = 0; i < 4; i++){
        petArr[i] = new Pet;
    }

    petArr[0] = &Gaston;
    petArr[1] = &Puff;
    petArr[2] = &Fluffernutter;
    petArr[3] = &Hennifer;

    for(int i = 0; i < 4; i++){
        petArr[i]->printPetData();
    }

    cout << "Eggs laid: " << Hennifer.getNumEggsLaid() << endl;

    return 0;
}
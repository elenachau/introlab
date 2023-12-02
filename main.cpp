#include "pet.h"
#define MAXSIZE 18

int main(){
    Pet Gaston("Gaston", "Dog"), Fluffernutter("Fluffernutter", "Cat"), Puff("Puff", "Dragon");
    Pet petArray[MAXSIZE];

    for(int i = 0; i < MAXSIZE; i++){
        if(i%3 == 0){
            petArray[i] = Gaston;
        }
        else if (i%2 == 0) {
            petArray[i] = Puff;
        }
        else {
            petArray[i] = Fluffernutter;
        }
    }

    for(int i = 0; i < MAXSIZE; i++){
        petArray[i].printPetData();
    }
    
    return 0;
}
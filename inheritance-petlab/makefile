pet_lab: chicken.o pet.o toy.o main.o
	g++ -o pet_lab chicken.o pet.o toy.o main.o

main.o: pet.h chicken.h toy.h main.cpp
	g++ -c main.cpp

chicken.o: pet.h toy.h chicken.h chicken.cpp
	g++ -c chicken.cpp

pet.o: toy.h pet.h pet.cpp
	g++ -c pet.cpp

toy.o: toy.h toy.cpp
	g++ -c toy.cpp

clean:
	rm *.o pet_lab
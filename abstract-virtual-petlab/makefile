pet_lab: main.o chicken.o cat.o pet.o toy.o
	g++ -o pet_lab main.o chicken.o cat.o pet.o toy.o

main.o: main.cpp chicken.h cat.h
	g++ -c main.cpp

chicken.o: chicken.h chicken.cpp pet.h
	g++ -c chicken.cpp

cat.o: cat.h cat.cpp pet.h
	g++ -c cat.cpp

pet.o: pet.h pet.cpp toy.h
	g++ -c pet.cpp

toy.o: toy.h toy.cpp
	g++ -c toy.cpp

clean:
	rm *.o pet_lab
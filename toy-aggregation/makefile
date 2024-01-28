toy_aggregation: main.o pet.o toy.o
	g++ -o toy_aggregation main.o pet.o toy.o
main.o: main.cpp pet.h toy.h
	g++ -c main.cpp
pet.o: pet.h toy.h pet.cpp
	g++ -c pet.cpp
toy.o: toy.h toy.cpp
	g++ -c toy.cpp
clean:
	rm *.o toy_aggregation
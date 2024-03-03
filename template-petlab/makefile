petLab: main.o pet.o toy.o chicken.o cat.o petStore.h
	g++ -o petLab main.o pet.o toy.o chicken.o cat.o
main.o: main.cpp pet.h toy.h chicken.h cat.h petStore.h
	g++ -c main.cpp
pet.o: pet.cpp pet.h toy.h
	g++ -c pet.cpp
toy.o: toy.cpp toy.h
	g++ -c toy.cpp
cat.o: cat.cpp cat.h pet.h toy.h
	g++ -c cat.cpp
chicken.o: chicken.cpp chicken.h pet.h toy.h
	g++ -c chicken.cpp
clean:
	rm *.o petLab
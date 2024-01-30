overloading: main.o pet.o toy.o
	g++ -o overloading main.o pet.o toy.o

main.o: main.cpp pet.h toy.h
	g++ -c main.cpp

pet.o: pet.cpp pet.h
	g++ -c pet.cpp

toy.o: toy.cpp toy.h
	g++ -c toy.cpp

clean:
	rm -f *.o overloading
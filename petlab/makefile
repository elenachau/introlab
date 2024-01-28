pet_lab: pet.o main.o
	g++ -o pet_lab pet.o main.o

main.o: main.cpp pet.h
	g++ -c main.cpp

pet.o: pet.cpp pet.h
	g++ -c pet.cpp

clean:
	rm -f *.o pet_lab
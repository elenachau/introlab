math: arrayManager.o main.o fraction.o
	g++ -o math arrayManager.o main.o fraction.o -g

main.o: arrayManager.h fraction.h main.cpp helpers.h
	g++ -c main.cpp -g

arrayManager.o: arrayManager.h arrayManager.cpp fraction.h
	g++ -c arrayManager.cpp -g

fraction.o: fraction.h fraction.cpp
	g++ -c fraction.cpp -g

clean:
	rm *.o math
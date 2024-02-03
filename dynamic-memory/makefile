calendar: main.o day.o helpers.o month.o
	g++ -o calendar main.o day.o helpers.o month.o

main.o: main.cpp helpers.h
	g++ -c main.cpp

helpers.o: helpers.h helpers.cpp
	g++ -c helpers.cpp

month.o: month.h month.cpp
	g++ -c month.cpp

day.o: day.h day.cpp
	g++ -c day.cpp

clean:
	rm *.o calendar

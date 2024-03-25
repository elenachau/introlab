bookstore: main.o bookstore.o book.o
	g++ -o bookstore main.o bookstore.o book.o

main.o: main.cpp bookstore.cpp
	g++ -c main.cpp

bookstore.o: bookstore.h bookstore.cpp
	g++ -c bookstore.cpp

book.o: book.h book.cpp
	g++ -c book.cpp

clean:
	rm *.o bookstore
shapeExecutable: main.o shape.o circle.o trapezoid.o triangle.o
	g++ -o shapeExecutable shape.o circle.o trapezoid.o triangle.o main.o

main.o: main.cpp shape.h trapezoid.h triangle.h circle.h
	g++ -c main.cpp

shape.o: shape.cpp shape.h
	g++ -c shape.cpp

circle.o: circle.cpp circle.h shape.h
	g++ -c circle.cpp

triangle.o: triangle.cpp triangle.h shape.h
	g++ -c triangle.cpp

trapezoid.o: trapezoid.cpp trapezoid.h shape.h
	g++ -c trapezoid.cpp

clean:
	rm -f *.o shapeExecutable
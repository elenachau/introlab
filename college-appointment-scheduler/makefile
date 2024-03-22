appointment: main.o appointment.o student.o teacher.o person.o
	g++ -o appointment main.o appointment.o student.o teacher.o person.o

main.o: main.cpp college.h student.h teacher.h person.h
	g++ -c main.cpp

student.o: student.h student.cpp person.h appointment.h
	g++ -c student.cpp

teacher.o: teacher.h teacher.cpp person.h appointment.h
	g++ -c teacher.cpp

person.o: person.h person.cpp appointment.h
	g++ -c person.cpp

appointment.o: appointment.h appointment.cpp
	g++ -c appointment.cpp

clean:
	rm *.o appointment

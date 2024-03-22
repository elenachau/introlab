#include "student.h"

Student::Student():Person(){
    initializeArray();
    first = "none";
    last = "none";
    numAppointments = 0;
}

Student::Student(string f, string l, Appointment* a, int n){
    initializeArray();
    first = f;
    last = l;
    numAppointments = n;
    for(int i = 0; i < n; i++){
        schedule[i] = a[i];
    }
}

Student::Student(const Student& rhs){
    initializeArray();
    first = rhs.first;
    last = rhs.last;
    numAppointments = rhs.numAppointments;
    for(int i = 0; i < numAppointments; i++){
        schedule[i] = rhs.schedule[i];
    }
}

void Student::initializeArray(){
    max = 5;
    schedule = new Appointment[5];
}

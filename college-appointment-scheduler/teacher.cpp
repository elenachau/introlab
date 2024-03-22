#include "teacher.h"

Teacher::Teacher():Person(){
    initializeArray();
    first = "none";
    last = "none";
    max = 3;
    schedule = new Appointment[max];
    numAppointments = 0;
}

Teacher::Teacher(string f, string l, Appointment* a, int n){
    initializeArray();
    first = f;
    last = l;
    numAppointments = n;
    for(int i = 0; i < n; i++){
        schedule[i] = a[i];
    }
}

Teacher::Teacher(const Teacher& rhs){
    initializeArray();
    first = rhs.first;
    last = rhs.last;
    numAppointments = rhs.numAppointments;
    for(int i = 0; i < numAppointments; i++){
        schedule[i] = rhs.schedule[i];
    }
}

void Teacher::initializeArray(){
    max = 3;
    if(schedule != nullptr){
        Appointment* temp = new Appointment[numAppointments];
        for(int i = 0; i < numAppointments; i++){
            temp[i] = schedule[i];
        }
        delete[] schedule;
        schedule = new Appointment[3];
        for(int i = 0; i < numAppointments; i++){
            schedule[i] = temp[i];
        }
        delete[] temp;
    }
    else{
        schedule = new Appointment[3];
    }
}

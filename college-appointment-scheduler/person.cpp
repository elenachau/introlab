#include "person.h"

Person& Person::operator=(const Person& rhs){
    first = rhs.first;
    last = rhs.last;
    numAppointments = rhs.numAppointments;
    max = rhs.max;
    schedule = new Appointment[rhs.max];
    for(int i = 0; i < max; i++){
        schedule[i] = rhs.schedule[i];
    }

    return *this;
}

string Person::getFirst(){
    return first;
}

string Person::getLast(){
    return last;
}

int Person::getNumAppointments(){
    return numAppointments;
}

Appointment* Person::getAppointments(){
    return schedule;
}

int Person::getMax(){
    return max;
}

void Person::setFirst(string f){
    first = f;
}

void Person::setLast(string l){
    last = l;
}

void Person::addAppointment(Appointment& a){
    if(numAppointments != max){
        schedule[numAppointments] = a;
        numAppointments++;
    }
    else{
        cout << "Schedule Full." << endl;
    }
}

Person::~Person(){
    delete[] schedule;
}
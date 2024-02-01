#include "day.h"

Day::Day(){
    number = 1;
    nextDay = nullptr;
}

Day::Day(int n, Day* d){ //deep copy handled by linekd list
    number = n;
    nextDay = nullptr;
}

Day::Day(const Day& rhs){
    number = rhs.number;
    nextDay = rhs.nextDay;
}


void Day::setNumber(int n){
    number = n;
}

int Day::getNumber(){
    return number;
}

Day* Day::getNextDay(){
    return nextDay;
}

void Day::setNextDay(Day* d){ //pointer to Date type object
    nextDay = d;
}

void Day::displayDay(){
    cout << number << endl;
}


Day& Day::operator=(const Day& rhs){
    number = rhs.number;
    nextDay = rhs.nextDay;
    return *this; //return reference to current object 
}

Day::~Day() {
    //deletion handled by linked list
    //delete nextDay;
}
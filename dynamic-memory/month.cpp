#include "month.h"

Month::Month(){
    name = "none";
    firstMonth = lastMonth = nullptr; //no valid memory location
}

Month::Month(string n, Day* f, Day* l){
    name = n;

    if(f == nullptr) {
        firstMonth = lastMonth = nullptr;
        return;
    }
    Day* temp = f;
    firstMonth = lastMonth = new Day; //dynamically allocates new Day object on the heap
    firstMonth->setNumber(temp->getNumber()); //-> dereference the ptr
    firstMonth->setNextDay(nullptr);

    temp = temp->getNextDay();
    while (temp != nullptr) {
        lastMonth->setNextDay(new Day);
        lastMonth = lastMonth -> getNextDay(); //lastMonth equal to the new Day instance
        lastMonth->setNumber(temp->getNumber()); //setting data for new Day object
        lastMonth->setNextDay(nullptr);
        temp = temp->getNextDay();
    } //when temp == nullptr, indicates end of linked list
}

Month::Month(const Month& rhs){
    name = rhs.name;
    if(rhs.firstMonth == nullptr){
        firstMonth = lastMonth = nullptr;
        return;
    }
    Day* temp = rhs.firstMonth;
    firstMonth = lastMonth = new Day;
    firstMonth->setNumber(temp->getNumber());
    firstMonth->setNextDay(nullptr);

    temp=temp->getNextDay();
    while(temp != nullptr) {
        lastMonth->setNextDay(new Day);
        lastMonth = lastMonth -> getNextDay();
        lastMonth->setNumber(temp->getNumber());
        lastMonth->setNextDay(nullptr);
        temp = temp->getNextDay();
    }
}


void Month::setName(string n){
    name = n;
}

void Month::setFirstOfMonth(Day* f){
    firstMonth = f;
}

void Month::setLastOfMonth(Day* l){
    lastMonth = l;
}


string Month::getName(){
    return name;
}

Day* Month::getFirstOfMonth(){
    return firstMonth;
}

Day* Month::getLastOfMonth(){
    return lastMonth;
}


void Month::addDayToMonth(Day d){ //encapsulation
    Day* newDay = new Day;
    newDay->setNumber(d.getNumber());
    if(firstMonth == nullptr) {
        firstMonth = newDay; //pointer firstMonth and pointer newDay points to the same object
        lastMonth = firstMonth; //same if 1 day exists in calendar
    }
    else {
        lastMonth->setNextDay(newDay);
        lastMonth = newDay; //default constructor
    }
}


Month& Month::operator=(const Month& rhs){
    name = rhs.name;
    if(rhs.firstMonth == nullptr) {
        firstMonth = lastMonth = nullptr;
    }
    else {
        Day* temp = rhs.firstMonth;
        firstMonth = lastMonth = new Day;
        firstMonth->setNumber(temp->getNumber());
        firstMonth->setNextDay(nullptr);

        temp = temp->getNextDay();
        while(temp != nullptr) {
            lastMonth->setNextDay(new Day);
            lastMonth = lastMonth->getNextDay();
            lastMonth->setNumber(temp->getNumber());
            lastMonth->setNextDay(nullptr);
            temp = temp->getNextDay();
        }
    }
    return *this;
}


Month::~Month(){
    Day* temp = firstMonth;
    while(temp != nullptr) {
        Day* icky = temp;
        temp = temp->getNextDay(); 
        delete icky; //track prev ptr
    }
    firstMonth = nullptr;
    lastMonth = nullptr;
}

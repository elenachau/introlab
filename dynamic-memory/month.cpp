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
    firstMonth = lastMonth = new Day; //dynamically allocates new Day object on the heap, returning as ptr
    firstMonth->setNumber(temp->getNumber()); //-> dereference the ptr
    firstMonth->setNextDay(nullptr);

    temp = temp->getNextDay();
    while (temp != nullptr) {
        lastMonth->setNextDay(new Day);
        lastMonth = lastMonth -> getNextDay(); //lastMonth equal to nextDay which is a pointer, both point to the new Day object
        lastMonth->setNumber(temp->getNumber());
        lastMonth->setNextDay(nullptr);
        temp = temp->getNextDay();
    } //when temp == nullptr, indicates end of linked list
}

Month::Month(const Month&){

}


void Month::setName(string){

}

void Month::setFirstOfMonth(Day*){

}

void Month::setLastOfMonth(Day*){

}


string Month::getName(){

}

Day* Month::getFirstOfMonth(){

}

Day* Month::getLastOfMonth(){

}


void Month::addDayToMonth(Day){

}


Month& Month::operator=(const Month&){

}


Month::~Month(){

}

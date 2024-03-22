#include "appointment.h"

Appointment::Appointment(){
    hour = minutes = day = month = year = 0;
}

Appointment::Appointment(int h, int min, int d, int mon, int y){
    hour = h;
    minutes = min;
    day = d;
    month = mon;
    year = y;

}

Appointment::Appointment(const Appointment& rhs){
    hour = rhs.hour;
    minutes = rhs.minutes;
    day = rhs.day;
    month = rhs.month;
    year = rhs.year;
}

int Appointment::getHour(){
    return hour;
}

int Appointment::getMinutes(){
    return minutes;
}

int Appointment::getDay(){
    return day;
}

int Appointment::getMonth(){
    return month;
}

int Appointment::getYear(){
    return year;
}

void Appointment::setHour(int h){
    hour = h;
}

void Appointment::setMinutes(int min){
    minutes = min;
}

void Appointment::setDay(int d){
    day = d;
}

void Appointment::setMonth(int mon){
    month = mon;
}

void Appointment::setYear(int y){
    year = y;
}

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
using namespace std;

class Appointment{
    int hour, minutes, day, month, year;

    public:
        Appointment();
        Appointment(int, int, int, int, int);
        Appointment(const Appointment&);

        int getHour();
        int getMinutes();
        int getDay();
        int getMonth();
        int getYear();

        void setHour(int);
        void setMinutes(int);
        void setDay(int);
        void setMonth(int);
        void setYear(int);

        friend ostream& operator<<(ostream& out, const Appointment&);
};

#endif
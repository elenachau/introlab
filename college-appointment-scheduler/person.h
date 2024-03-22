#ifndef PERSON_H
#define PERSON_H

#include "appointment.h"

class Person{
    protected:
        string first, last;
        Appointment* schedule;
        int numAppointments, max;

    public:
        Person& operator=(const Person& rhs);

        string getFirst();
        string getLast();
        int getNumAppointments();
        Appointment* getAppointments();
        int getMax();

        void setFirst(string);
        void setLast(string);
        void addAppointment(Appointment&);

        ~Person();

        virtual void initializeArray() = 0;
        friend ostream& operator<<(ostream& out, const Person&);
    
};

#endif
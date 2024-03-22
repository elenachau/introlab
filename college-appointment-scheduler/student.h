#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student: public Person{
    public:
        Student();
        Student(string, string, Appointment*, int);
        Student(const Student&);

        void initializeArray();
};

#endif
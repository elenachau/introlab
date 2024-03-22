#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher: public Person{
    public:
        Teacher();
        Teacher(string, string, Appointment*, int);
        Teacher(const Teacher&);
        void initializeArray();
};

#endif
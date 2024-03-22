#include "college.h"
#include "student.h"
#include "teacher.h"

int main(){
    Appointment temp(15, 30, 23, 12, 2023);
    Appointment* arr = new Appointment[1];
    arr[0] = temp;

    Student Bean("Mr.", "Bean", arr, 1);
    Teacher Bill("Bill", "Hader", arr, 1);
    Student* students = new Student[100];
    Teacher* teachers = new Teacher[100];

    students[0] = Bean;
    teachers[0] = Bill;

    College<Student, Teacher> CoEn(students, teachers, 1, 1, 100, 100);
    cout << endl << "STUDENT SCHEDULE" << endl;
    for(int i = 0; i < CoEn.getNumGroupA(); i++){
        cout << CoEn.getGroupA()[i] << endl;
    }
    
    cout << "TEACHER SCHEDULE" << endl;
    for(int i = 0; i < CoEn.getNumGroupB(); i++){
        cout << CoEn.getGroupB()[i] << endl;
    }
}

ostream& operator<<(ostream& out, const Appointment& rhs){
    out << rhs.month << "/" << rhs.day << "/" << rhs.year << " @ " << rhs.hour << ":" << rhs.minutes << endl;
    return out; 
}

ostream& operator<<(ostream& out, const Person& rhs){
    out << rhs.first << " " << rhs.last << endl;
    for(int i = 0; i < rhs.numAppointments; i++) {
        out << rhs.schedule[i] << endl;
    }
    return out;
}
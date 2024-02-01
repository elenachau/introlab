#ifndef DAY_h
#define DAY_H

#include <iostream>
using namespace std;

class Day{
    int number;
    Day* nextDay;

    public:
        Day();
        Day(int, Day*);
        Day(const Day&);

        void setNumber(int);
        int getNumber();
        Day* getNextDay();
        void setNextDay(Day*);
        void displayDay();
        
        Day& operator=(const Day& rhs);
        ~Day();
};

#endif
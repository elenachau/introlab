#ifndef MONTH_H
#define MONTH_H

#include "day.h"

class Month{
    string name;
    Day* firstMonth, *lastMonth;

    public:
        Month();
        Month(string, Day*, Day*);
        Month(const Month&);

        void setName(string);
        void setFirstOfMonth(Day*);
        void setLastOfMonth(Day*);

        string getName();
        Day* getFirstOfMonth();
        Day* getLastOfMonth();
        
        void addDayToMonth(Day);

        Month& operator=(const Month&);
        friend ostream& operator<<(ostream&, Month&);

        ~Month();

};

#endif
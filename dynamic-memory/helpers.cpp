#include "helpers.h"

Month* constructMonth(months month, string name){ //month is enum type, signifying number days in a month
    Month* newMonth = new Month; 
    newMonth->setName(name);
    for(int i = 0; i < month; i++) {
        Day* newDay = new Day;
        newDay->setNumber(i+1);
        newMonth->addDayToMonth(*newDay);
    }
    return newMonth;
}

Month* addMonth(Month& newMonth, Month* year, int& numMonths, int& maxSize){
    if(numMonths == maxSize) {
        maxSize*=2; //adjust size
        Month* temp = new Month[maxSize];
        for(int i = 0; i < numMonths; i++) {
            temp[i] = year[i];
        }
        delete[] year; //without, will lead to memory leak
        year = temp;
    }
    year[numMonths] = newMonth;
    numMonths++;
    return year;
}

Month* constructYear(Month* year, int& numMonths, int& maxMonths){
    Month* january = constructMonth(Jan, "January");
    year = addMonth(*january, year, numMonths, maxMonths);
    Month* februrary = constructMonth(Feb, "Februrary");
    year = addMonth(*februrary, year, numMonths, maxMonths);
    Month* march = constructMonth(Mar, "March");
    year = addMonth(*march, year, numMonths, maxMonths);
    Month* april = constructMonth(Apr, "April");
    year = addMonth(*april, year, numMonths, maxMonths);
    Month* may = constructMonth(May, "May");
    year = addMonth(*may, year, numMonths, maxMonths);
    Month* june = constructMonth(Jun, "June");
    year = addMonth(*june, year, numMonths, maxMonths);
    Month* july = constructMonth(Jul, "July");
    year = addMonth(*july, year, numMonths, maxMonths);
    Month* august = constructMonth(Aug, "August");
    year = addMonth(*august, year, numMonths, maxMonths);
    Month* september = constructMonth(Sept, "September");
    year = addMonth(*september, year, numMonths, maxMonths);
    Month* october = constructMonth(Oct, "October");
    year = addMonth(*october, year, numMonths, maxMonths);
    Month* november = constructMonth(Nov, "November");
    year = addMonth(*november, year, numMonths, maxMonths);
    Month* december = constructMonth(Dec, "December");
    year = addMonth(*december, year, numMonths, maxMonths);
    return year;
}

ostream& operator<<(ostream& out, Month& m) { //standalone func, not in class
    out << m.getName() << endl;
    Day *beginning = m.getFirstOfMonth();
    out << "Dates: ";
    int numDays = 0;
    while(beginning != nullptr) {
        out << beginning->getNumber();
        if(numDays < (m.getLastOfMonth()->getNumber())) {
            out << " ";
        }
        beginning = beginning->getNextDay();
        numDays++;
    }
    out << endl << endl;
    return out;
}
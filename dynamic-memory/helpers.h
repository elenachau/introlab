#ifndef HELPERS_H
#define HELPERS_H

#include "month.h"

//enum is a user-defined data type defining only a set of named int constants
enum months{Jan=31, Feb=28, Mar=31, Apr=30, May=31, Jun=30, Jul=31, Aug=31, Sept=30, Oct=31, Nov=30, Dec=31}; 

Month* constructMonth(months month, string name);
Month* addMonth(Month& newMonth, Month* year, int& numMonths, int& maxSize);
Month* constructYear(Month*, int&, int&);


#endif
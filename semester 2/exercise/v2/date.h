#ifndef DATE_H
#define DATE_H

#include<iostream>
#include <stdexcept>
using namespace std;

class Date{// this class calculates the birth & register time
    int day,month,year;
    int checkDay(int testDay) const{
    static const int daysPerMonth[ monthsPerYear + 1] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    if(month == 2 && testDay == 29 && (year & 400 == 0 || (year % 4 == 0 && year %100 != 0)))
        return testDay;

    throw invalid_argument("invalid day for current month and year");
    }
public:
    static const int monthsPerYear = 12;
    Date(int mn, int dy, int yr){
        if ( mn > 0 && mn <= monthsPerYear )
            month = mn;
        else
            throw invalid_argument("month must be 1-12");

        year= yr;
        day = checkDay( dy );
/*         cout << "Date object constructor for date " ;
        print();
        cout << endl; */
    }

    void print() const{
        cout << month<< '/' <<day << '/' << year;
    }

/*     ~Date(){
    cout << "Date object destructor for date ";
    print();
    cout << endl;
    } */
};

#endif

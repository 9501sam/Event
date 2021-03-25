#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;
class Date
{
public:
   Date( int m = 1, int d = 1, int y = 1900 ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   int getDay();
   int getMonth(); 
   int getYear();  
   static bool leapYear( int ); // is date in a leap year?
   void print();  //print Data using the format Month/Day/Year
private:
   int month;
   int day;
   int year;
   static const int days[]; // array of days per month
}; // end class Date
#endif

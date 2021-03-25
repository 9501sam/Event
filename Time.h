#ifndef TIME_H
#define TIME_H
#include "Date.h" 
#include <iostream>
using namespace std;

//Time class
class Time { 
public:
     	  Time(int h = 0, int m = 0, int s = 0);
      	void setTime(int h, int m, int s);
      	int getHour();
      	int getMinute(); 
      	int getSecond();           
      	void print(); 
private:
      	int hour;
      	int minute;
      	int second;
};
#endif

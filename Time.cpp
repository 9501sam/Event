#include <iostream>
#include "Time.h"
#include "Date.h"

using namespace std;
Time::Time(int h, int m, int s)
{     //class time constructor that accepts parameters
      setTime(h, m, s);
}
 
void Time::setTime(int hours, int minutes, int seconds)
{     //sets a valid time
      if(0 <= hours && hours < 24)//makes sure hours are valid
            hour = hours;
      else
            hour = 0;
 
      if(0 <= minutes && minutes < 60)//makes sure minutes are valid
            minute = minutes;
      else
            minute = 0;
      
      if(0 <= seconds && seconds < 60)//makes sure seconds are valid
            second = seconds;
      else
            second = 0;
}
 
int Time::getHour()
{    
//returns the hours
      return hour;
}

int Time::getMinute()
{    
//returns the minutes
      return minute;
}

int Time::getSecond()
{    
//returns the seconds
      return second;
} 

void Time::print()
{    
//displays the hours, minutes, seconds and Date to the screen
      cout << getHour() << ":" << getMinute() << ":" << getSecond() << " ";
}

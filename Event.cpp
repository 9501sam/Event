#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

Event::Event( string E, Time &t, Date &d ) // default Event constructor
: eventTime(t), eventDate(d), event(E)
{                                                         
}
 
void Event::setEvent(string s, int hours, int minutes, int seconds, int m, int d, int y)
{
      eventDate.setDate(m, d, y);
      eventTime.setTime(hours, minutes, seconds);
      event = s;
}
 
void Event::print()
{
      cout << event << " is ";
      eventDate.print();
      eventTime.print();
      cout << endl;
}
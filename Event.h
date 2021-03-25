#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include "Time.h"
#include "Date.h"

using namespace std;
class Event {
public:
      Event( string E, Time &t, Date &d ); // default Event constructor
      void setEvent(string s, int hours, int minutes, int seconds, int m, int d, int y);
      void print();

private:
      string event;
      Date eventDate;
      Time eventTime;
};

#endif
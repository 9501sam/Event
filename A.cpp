#include <iostream>
#include <string>
#include "Time.h"
#include "Date.h"
#include "Event.h"

using namespace std;
int main()
{ 
      cout << "Create the Dragon_Boat_Festival_2020 " << endl; 
      Date newDate(6, 25, 2020);
      Time newTime(0, 0, 0);
      Event Dragon_Boat_Festival_2020("Dragon Boat Festival 2020", newTime, newDate);
      cout << "Print the event for the Dragon_Boat_Festival_2020 object." << endl; 
      Dragon_Boat_Festival_2020.print();
      cout << "Modify the event of Dragon_Boat_Festival_2020 object to the noon of Dragon Boat Festival 2020 by using setEvent()." << endl;
      Dragon_Boat_Festival_2020.setEvent("The noon of Dragon Boat Festival 2020", 12, 0, 0, 6, 25, 2020 );
      cout << "Print the event for the modified Dragon_Boat_Festival_2020 object." << endl; 
      Dragon_Boat_Festival_2020.print();
      return 0;
}

//BusinessPark.cpp: Defines the entry point for the console application
//
#include <iostream>
#include <string>
#include "Building.h"

using namespace std;

int main()
{
  Building b1("XYZ industries", 6, 127, 600, 196);
  Building b2("Rapid development Crew", 8, 210, 822, 85);
  Building b3("SoftUni", 11, 106, 200, 60);

  cout << b1.getName() << endl;
  cout << b2.getName() << endl;
  cout << b3.getName() << endl;

  //Put three building objects in array
  Building businessPark[3] = {b1, b2, b3};

  cout << businessPark[0].getEmployees() << endl;
  cout << businessPark[1].getSeats() << endl;
  cout << businessPark[2].getFloors() << endl;

  return 0;
}

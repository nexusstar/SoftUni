//BusinessPark.cpp: Defines the entry point for the console application
//
#include <iostream>
#include <string>
#include "Building.h"

using namespace std;

int max(int a, int b, int c)
{
     int m = a;
     (m < b) && (m = b);
     (m < c) && (m = c);
     return m;
}

int main()
{

  Building b1("XYZ industries", 6, Level(-1, "office"), 127, 600, 196);
  Building b2("Rapid development Crew", 8, Level(1, "restaurant"), 210, 822, 85);
  Building b3("SoftUni", 11, Level(1, "office"), 106, 200, 60);

  b1.specialLevel.level(10); //set level

  cout << "Special level of: " << b1.getName();
  cout << " is on " << b1.specialLevel.getLevel();
  cout <<" with purpose " << b1.specialLevel.getPurpose() << endl;

  //Put three building objects in array
  Building businessPark[3] = {b1, b2, b3};

  //Most employees
  cout << "Most employess are: ";
  cout << max(
      businessPark[0].getEmployees(),
      businessPark[1].getEmployees(),
      businessPark[2].getEmployees()
      );
  cout << endl;

  return 0;
}

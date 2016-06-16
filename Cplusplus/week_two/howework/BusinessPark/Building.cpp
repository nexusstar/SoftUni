#include <iostream>
#include "Building.h"

using namespace std;

Building::Building(
    string newName,
    int floorCount,
    Level newSpecialLevel,
    int officeCount,
    int employeesCount,
    int seatCount
    ) : specialLevel(1, "office")
{

  name(newName);
  floors(floorCount);
  specialLevel = newSpecialLevel;
  offices(officeCount);
  employees(employeesCount);
  freeSeats(seatCount);

  cout << "Constructing Building: "<< this -> getName();
  cout<< " with: "<< this -> getFloors() << " floors";
  cout << " | " << this -> getOffices() << " offices";
  cout << " | " << this -> getEmployees() << " employees";
  cout << " | " << this -> getSeats() << " free working seats" << endl;
}

Building::~Building()
{
  cout << "Destructing Building: " << this -> getName() << endl;
}

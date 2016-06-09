#include <iostream>

#include "Building.h"

using namespace std;

void Building::name(string newName)
{
  _name = newName;
}

Building::Building(
    string newName,
    int floorCount,
    int officeCount,
    int employeesCount,
    int seatCount
    )
{

  name(newName);
  floors(floorCount);
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

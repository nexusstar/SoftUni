#include <iostream>

using namespace std;

const int MENUITEMS = 7;

string menu[MENUITEMS] =
{
  "0. Exit",
  "1. Get data for student with ID",
  "2. Get data for teacher with ID",
  "3. Get data for guest teacher with ID",
  "4. Add data for new student",
  "5. Add data for new teacher",
  "6. Add data for new guest teacher"
};

void printMenu()
{
  for(int i = 0; i < MENUITEMS; ++i)
  {
    cout << menu[i] << endl;
  }
}


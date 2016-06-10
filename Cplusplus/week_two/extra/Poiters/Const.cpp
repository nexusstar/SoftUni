#include "../ClassesAndObjects/Person.h"
#include <iostream>

using namespace std;

int Double(const int& x)
{
  return x*2;
}
int DoubleRef(int& x) //change by reference
{
  return x*2;
}

int main()
{

  int i = 3;
  const int ci = 4;
  i = 4;
  // ci = 4; //expression should be modifiable value
  //
  int j = 10;
  int DoubleJ = Double(j);
  int DoubleTen = Double(10);
  //int DoubleTenRef = DoubleRef(10); //invalid initialization of non-const reference

  Person Nexus("Nexus","Star", 150);
  const Person NexusC = Nexus; //object can be const
  Nexus.SetNumber(200); // can change non-const
  // NexusC.SetNumber(150);// error: passing const Person as `this`
  NexusC.GetNumber(); // same error as above needs const in declaration in order to work

  // Const and pointers

  int* pi = &i; //works
  // int* pcI = &ci; // don't we can not use pointer to change value of ci
  const int* pcI = &ci; //works just point to valueA

  cout << pcI << " " << * pcI << endl;
  // *pcI = 10; //error: assignment to read only location
  //
  pcI = &j; //change where we point to

  cout << pcI << " " << * pcI << endl;

  int * const cpJ = &j;
  *cpJ = 2;
  // cpJ = &i; //error: assignment of read-only variable cpJ

  return 0;
}

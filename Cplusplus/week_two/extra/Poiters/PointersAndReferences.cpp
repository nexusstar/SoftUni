#include <iostream>
#include <string>
#include <assert.h>
#include "../ClassesAndObjects/Person.h"

using namespace std;

int main()
{
  int a = 5;
  cout << "a is: " << a << endl;
  int *pA = &a;
  int *pB = &a;

  *pA = 4;
  cout << "a is: " << a <<  " *pA is: " << *pA << endl;
  cout << "pb is: " << pB << " pa is: " << pA << endl;

  // do a == *pA and *pB
  assert(a == *pA);
  assert(*pA == *pB);

  cout << "*pB is: " << *pB << " a is: " << a << endl;

  int b= 10;
  pA = &b;

  (*pA)++;
  cout << "a is: " << a << " *pA is " << *pA << endl;
  cout << "pB is: " << pB << " pa is: " << pA << endl;

  //Objects
  //
  Person p1("Nexus", "Star", 100);
  Person *pNexus = &p1;
  cout << p1.GetName() << endl;
  cout << (*pNexus).GetName() << endl;
  cout << pNexus -> GetName() << endl;

  return 0;

}

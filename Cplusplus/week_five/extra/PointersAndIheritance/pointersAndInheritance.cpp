#include <iostream>
#include "person.h"
#include "tweeter.h"

using namespace std;
int main()
{
  Person* Soll = new Person("Nexus", "Star", 42);
  Tweeter* Kate = new Tweeter("Kate", "Gregory", 456, "@kate");

  Person* pKate = Kate;

  cout << Soll -> getName() << endl;
  cout << Kate -> getName() << endl;
  // if getName() function is not virtual
  // it returns base class implementation
  cout << pKate -> getName() << endl;

  delete Kate;

  return 0;
}

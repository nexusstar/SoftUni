#include <iostream>

#include "Person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary) :
  firstname(first),lastname(last),arbitrarynumber(arbitrary)
{
  cout << "Constructing: " << GetName() << endl;
}
Person::~Person()
{
  cout << "Destructing: " << GetName() << endl;
}
string Person::GetName()
{
  return firstname + ' ' + lastname;
}

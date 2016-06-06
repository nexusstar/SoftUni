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
bool Person::operator<(Person& p)
{
  return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i)
{
  return arbitrarynumber < i;
}

bool operator<(int i, Person& p)
{
  return i < p.GetNumber();
}


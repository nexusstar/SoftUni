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
string Person::GetName() const
{
  return firstname + ' ' + lastname;
}
bool Person::operator<( const Person& p) const
{
  return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
  return arbitrarynumber < i;
}

bool operator<(int i, const Person& p)
{
  return i < p.arbitrarynumber;
}


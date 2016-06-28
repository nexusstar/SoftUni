#include <iostream>
#include "person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary):
  firstname(first), lastname(last), arbitrarynumber(arbitrary)
{

}

Person::~Person()
{

}

string Person::getName() const
{
  return firstname + " " + lastname;
}

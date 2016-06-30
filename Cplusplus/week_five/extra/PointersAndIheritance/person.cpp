#include <iostream>
#include "person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary):
  firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
  std::cout << "Created Person object: " << this -> getName() << std::endl;

}

Person::~Person()
{

  std::cout << "Deleted Person object: " << this -> getName() << std::endl;

}

string Person::getName() const
{
  return firstname + " " + lastname;
}

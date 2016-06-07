#include <iostream>
#include "../ClassesAndObjects/Person.h"
#include "Accum.h"

using namespace std;

int main()
{
  Accum<int> integers(0);
  integers += 3;
  integers += 10;

  cout << integers.GetTotal() << endl;

  Accum<string> strings(" ");
  strings += "Hello";
  strings +=" world!";

  cout << strings.GetTotal() << endl;

  Accum<Person> people(0);
  Person p1("Nexus", "Star", 123);
  Person p2("Someone", "Else", 456);

  people += p1;
  people += p2;
  cout << people.GetTotal() << endl;

  return 0;
}

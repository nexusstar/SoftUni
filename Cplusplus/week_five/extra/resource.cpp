#include <iostream>
#include "resource.h"

using std::cout;
using std::string;
using std::endl;

Resource::Resource(string n):name{n}
{
  cout << "constructing " << name << endl;
}
Resource::~Resource()
{
  cout << "destructing" << name << endl;
}

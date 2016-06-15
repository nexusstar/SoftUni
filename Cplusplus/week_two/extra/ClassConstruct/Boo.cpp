//Boo.cpp main entry point
//
#include <iostream>
#include "MyClass.h"

using namespace std;

int main()
{
  MyClass x (20, MyOtherClass(10));

  cout << "MyClass aNumber: " << x.getNumber() << endl;
  cout << "MyClass MyOtherClass member aNumber: " << x.myObject.getNumber() << endl;

}

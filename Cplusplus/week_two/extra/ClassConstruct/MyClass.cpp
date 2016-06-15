#include "MyClass.h"

void MyClass::setNumber(int someNumber)
{
  aNumber = someNumber;
}
int MyClass::getNumber()
{
  return aNumber;
}

MyClass::MyClass( int SomeNumber, MyOtherClass someObject) : myObject(42)
{
  aNumber = SomeNumber;
  myObject = someObject;
}

MyClass::~MyClass()
{}

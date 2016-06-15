#include "MyOtherClass.h"

void MyOtherClass::setNumber(int someNumber)
{
  aNumber = someNumber;
}

int MyOtherClass::getNumber()
{
  return aNumber;
}

MyOtherClass::MyOtherClass(int someNumber)
{
  setNumber(someNumber);
}

MyOtherClass:: ~MyOtherClass()
{}

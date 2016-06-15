#include "MyOtherClass.h"

class MyClass
{
  private:
    int aNumber;
  public:
    MyOtherClass myObject;
    void setNumber(int someNumber);
    int getNumber();
    MyClass( int someNumber, MyOtherClass someObject);
    ~MyClass();

};

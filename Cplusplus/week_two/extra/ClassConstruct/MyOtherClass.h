#include <iostream>

class MyOtherClass
{
  private:
    int aNumber;
  public:
    void setNumber(int someNumber);
    int getNumber();
    MyOtherClass(int someNumber);
    ~MyOtherClass();

    void doSomething(){ std::cout << "Do something" << std::endl;}
};

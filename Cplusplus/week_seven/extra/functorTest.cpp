#include <iostream>
#include <thread>

class myClass
{
  public:
    void operator()()
    {
      std::cout << "This is myObject as functor\n";
    }
    void publicFunction()
    {
      std::cout << "public function of myClass\n";
    }
};


void threadFunctionTest()
{
  std::cout << "This is called from different thread\n";
}

int main()
{
  //initialize with function
  std::thread aThreadFunction(threadFunctionTest);

  if (aThreadFunction.joinable())
    aThreadFunction.join();

  //initialize with object functor
  myClass anObject;
  std::thread aThreadFunctor(anObject);

  if(aThreadFunctor.joinable())
    aThreadFunctor.join();

  //using object member function
  myClass anObjectFunc;
  std::thread aThreadMemberTest(&myClass::publicFunction, anObjectFunc);
  if(aThreadMemberTest.joinable())
    aThreadMemberTest.join();

  std::cout << "This is called from main\n";

  return 0;
}

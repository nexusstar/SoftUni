#include <iostream>
#include <thread>


void foo()
{
  std::cout << "A new thread has been created";
}

int main()
{
  std::thread aThread(foo);
  aThread.join();
  return 0;
}

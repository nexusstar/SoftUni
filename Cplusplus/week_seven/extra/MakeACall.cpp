#include <iostream>
#include <thread>
#include <mutex>

std::mutex m;

void makeACall()
{
  m.lock();
  std::cout << "Hello my friend this is " << std::this_thread::get_id() << std::endl;
  m.unlock();
}

int main()
{
  std::thread person1(makeACall);
  std::thread person2(makeACall);
  std::thread person3(makeACall);

  if (person1.joinable())
    person1.join();

  if(person2.joinable())
    person2.join();

  if(person3.joinable())
    person3.join();

  return 0;
}

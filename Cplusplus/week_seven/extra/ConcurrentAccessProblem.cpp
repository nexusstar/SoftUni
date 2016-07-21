#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <ctime>

std::vector<int> vec;

void push()
{
  for(int i = 0; i != 10; ++i)
  {
    std::cout << "Push: " << i << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    vec.push_back(i);
  }
}

void pop()
{
  for(int i = 0; i != 10; ++i)
  {
    if(vec.size() > 0)
    {
      int val = vec.back();
      vec.pop_back();
      std::cout << "Pop " << val << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
  }
}

int main()
{
  std::thread pushThread(push);
  std::thread popThread(pop);

  if(pushThread.joinable())
    pushThread.join();

  if(popThread.joinable())
    popThread.join();

  return 0;
}

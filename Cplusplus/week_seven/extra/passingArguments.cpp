#include <iostream>
#include <thread>


void changeSign( int* arr, int lenght)
{
  std::cout << "An array of lenght: " << lenght << " is passed to thread" << std::endl;

  for(int i = 0; i != lenght; ++i)
    std::cout << arr[i] << " ";
  std::cout << "Change sign of all elements" << std::endl;
  for(int i = 0; i != lenght; ++i)
  {
    arr[i] *= -1;
    std::cout << arr[i] << " ";
  }
}

int main()
{
  int arr[5] = { 1, 2, 3, 4, 5 };

  std::thread aTreadTest(changeSign, arr, 5);
  if(aTreadTest.joinable())
    aTreadTest.join();

  return 0;
}

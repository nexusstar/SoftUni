#include <iostream>
#include <thread>


class myObjectClass
{
  public:
    void operator()(int* arr, int length)
    {
      std::cout << "An array of length " << length << " is passed to thread" << std::endl;
      for(int i = 0; i != length; ++i)
        std::cout << arr[i] << " ";
      std::cout << std::endl;
    }
    void doubleNum(int* arr, int length)
    {
      std::cout << "Initial array: " << std::endl;
      for(int i=0; i != length; ++i)
        std::cout << arr[i] << " ";
      std::cout << std::endl;
      std::cout << "Double elements" << std::endl;
      for(int i=0; i != length; ++i)
      {
        arr[i] *= 2;
        std::cout << arr[i] << " ";
      }
      std::cout << std::endl;
    }
};

int main ()
{

  int arr[5] = { 1, 2, 3, 4, 5 };
  myObjectClass aObject;

  std::thread aThred(aObject, arr, 5);
  if(aThred.joinable())
    aThred.join();

  std::thread aThreadPassFunction(&myObjectClass::doubleNum, &aObject, arr, 5);
  if(aThreadPassFunction.joinable())
    aThreadPassFunction.join();

  return 0;
}

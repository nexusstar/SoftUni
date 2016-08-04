#include <iostream>

template <typename AnyType>
void Swap( AnyType &a, AnyType& b )
{
  AnyType temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a = 1;
  int b = 3;
  double ad = 2.0;
  double bd = 5.3;
  std::string as = "hello";
  std::string bs = "world";

  std::cout << "a: " << a;
  std::cout << " b: " << b << std::endl;

  Swap(a, b);

  std::cout << "a: " << a;
  std::cout << " b: " << b << std::endl;


  std::cout << "ad: " << ad;
  std::cout << " bd: " << bd << std::endl;

  Swap(ad, bd);

  std::cout << "ad: " << ad;
  std::cout << " bd: " << bd << std::endl;

  std::cout << "as: " << as;
  std::cout << " bs: " << bs << std::endl;

  Swap(as, bs);

  std::cout << "as: " << as;
  std::cout << " bs: " << bs << std::endl;




  return 0;
}

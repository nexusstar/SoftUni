#include <iostream>
#include "functions.h"
#include "Utility.h"

typedef int (Utility::*UF)();
int ManipulateUtility( int i)
{
  Utility u(i);
  UF action;
  if(i>3)
  {
    action = &Utility::triplex;
  }
  else
  {
    action = &Utility::duplex;
  }

  return(u.*action)();
}

int main()
{

  int i = 7;
  long l = 3L;

  int i2 = Change(i);
  int i3 = Change((int)l);

  std::cout << "i: " << i << " ";
  std::cout << "i2: "<< i2 << std::endl;

  std::cout << "l: " << l << " ";
  std::cout << "i3: " << i3 << std::endl;

  int i4 = ManipulateUtility(i);
  int i5 = ManipulateUtility((int)l);

  std::cout << "i: " << i << " ";
  std::cout << "i2: "<< i4 << std::endl;

  std::cout << "l: " << l << " ";
  std::cout << "i3: " << i5 << std::endl;
  

  return 0;
}

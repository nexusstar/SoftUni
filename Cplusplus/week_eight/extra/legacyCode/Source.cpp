#include <iostream>
#include "functions.h"


int main()
{

  int i = 7;
  long l = 3L;

  int i2 = Change(i);
  int i3 = Change((int)l);

  std::cout << "i: " << i;
  std::cout << "i2: "<< i2 << std::endl;

  std::cout << "l: " << l;
  std::cout << "i3: " << i3 << std::endl;

  return 0;
}

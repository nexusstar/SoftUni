#include "../ClassesAndObjects/Person.h"

int Double(const int& x)
{
  return x*2;
}

int main()
{

  int i = 3;
  const int ci = 4;
  i = 4;
  // ci = 4;
  //
  int j = 10;
  int DoubleJ = Double(j);
  int DoubleTen = Double(10);

  return 0;
}

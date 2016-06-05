// function definitions
//
#include "Utility.h"

bool IsPrime (int x)
{
  bool prime = true;
  for (int i=2; i <= x/i; i++)
  {
    int factor = x/i;
    if (factor*i == x)
    {
      prime = false;
      break;
    }
  }
  return prime;
}

bool Is2MorePrime(int x)
{
  x=x+2;
  return IsPrime(x);
}

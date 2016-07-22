#include <iostream>
using namespace std;

int doubler(int i)
{
  return i*2;
}

int tripler(int i)
{
  return i*3;
}

//function pointer
typedef int(*CHANGER)(int i);

int Change(int i)
{
  CHANGER f;
  if(i>5)
    f = tripler;
  else
    f = doubler;

  return f(i);
}

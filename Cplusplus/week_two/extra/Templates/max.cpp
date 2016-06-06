#include <iostream>

using namespace std;

template <class T>
T max (T& t1, T& t2)
{
  return t1 < t2? t2 : t1;
}

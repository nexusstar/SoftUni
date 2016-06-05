#include <iostream>

using namespace std;

#include "Utility.h"


int main()
{
  int x;
  cout << "Eneter a number: ";
  cin >> x;

  if(IsPrime(x))
    cout << x << " is prime" << endl;
  else
    cout << x << " is not prime" << endl;

  if(Is2MorePrime(x))
    cout << x << "+2 is prime" << endl;
  else
    cout << x << "+2 is not prime" << endl;

  return 0;
}

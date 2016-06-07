#include <iostream>
#include "../ClassesAndObjects/Tweeter.h"

using namespace std;

  template<class T>
T max(T& t1, T& t2)
{
  return (t1 < t2)? t2 : t1;
}

int main()
{
  Person p2("Gosho","Goshev", 200);
  Tweeter t1("Nexus", "Star", 300, "@nexusstar");
  Person p1("Pesho","Pesho", 400);

  int a = 10;
  int b = 20;

  cout << t1.GetName() << endl;

  cout << "Max of: " << a << " and "<< b << " is " << max(a,b) << endl;
  cout << "Max of: " << p2.GetName() << " and " << p1.GetName() << " is " << max(p2, p1).GetName() << endl;

}

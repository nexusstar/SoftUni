#include "Tweeter.h"
#include "status.h"
#include <iostream>

using namespace std;

int main(){
  {
    Tweeter t1("Nexus", "Star", 100, "@nexusstar");
    cout << "t1 " << t1.GetName() << t1.GetNumber() << endl;
  } //forces  destructor run

  Person p2("Gosho","Goshev", 200);
  Tweeter t2("Some", "Other", 100, "@someother");

  cout << "Last line of main" << endl;
  cout << "p2: " << p2.GetName() << p2.GetNumber() << endl;

  // Error out with "use of undeclared indentifier"
  // because } destruct it on line 8
  // cout << "t1 " << t1.GetName() << t1.GetNumber() << endl;

  //Demonstration of operator overload functions
  cout << "p2 is ";
  if(!(p2 < t2))
    cout << "not ";
  cout << "less than t2" << endl;

  cout << "p2 is ";
  if(!(p2 < 250))
    cout << "not ";
  cout << "less than 250" << endl;

  cout << "200 is ";
  if(!(200 < t2))
    cout << "not ";
  cout << "less than t2" << endl;

  Status s = Pending;
  s = Cancelled;


  return 0;
  }


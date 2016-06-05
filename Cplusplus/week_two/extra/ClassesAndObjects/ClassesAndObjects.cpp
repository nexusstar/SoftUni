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

  cout << "Last line of main" << endl;
  cout << "p2: " << p2.GetName() << p2.GetNumber() << endl;

  // Error out with "use of undeclared indentifier"
  // because } destruct it on line 8
  // cout << "t1 " << t1.GetName() << t1.GetNumber() << endl;





  Status s = Pending;
  s = Cancelled;


  return 0;
  }


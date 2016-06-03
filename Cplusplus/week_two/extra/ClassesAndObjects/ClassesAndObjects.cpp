#include "Tweeter.h"
#include "status.h"
#include <iostream>

int main(){
  {
    Tweeter t1("Nexus", "Star", 100, "@nexusstar");
  } //forces  destructor run

  Person p2("Gosho","Goshev", 200);

  std::cout << "Last line of main" << std::endl;

  Status s = Pending;
  s = Cancelled;


  return 0;
}


#include "Tweeter.h"
#include <iostream>

int main(){
  {
    Tweeter t1("Nexus", "Star", 100, "@nexusstar");
  } //forces  destructor run

  Person p2("Gosho","Goshev", 200);
  
  std::cout << "Last line of main" << std::endl;

  return 0;
}


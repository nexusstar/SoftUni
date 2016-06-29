#ifndef __Environment_H_
#define __Environment_H_

#include <iostream>

class Environment
{
  public:
    Environment(){}
    Environment(double newGravity){ gravity = newGravity; }
    std::string name;
    double gravity;
};
#endif

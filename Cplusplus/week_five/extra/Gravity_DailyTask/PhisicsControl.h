#ifndef __PhisicsControl_H_
#define __PhisicsControl_H_

#include "PhisicalObject.h"

class PhisicsControl
{
  Environment environment;
  public:
  PhisicsControl(){};
  PhisicsControl(Environment newEnvironment):
    environment(newEnvironment) {};
  float finalSpeedOfFallingObject(const PhisicalObject& po, double timeOfFallinSeconds);
};
#endif

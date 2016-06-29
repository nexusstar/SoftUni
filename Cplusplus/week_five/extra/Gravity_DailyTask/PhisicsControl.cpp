#include "PhisicsControl.h"


float PhisicsControl::finalSpeedOfFallingObject(const PhisicalObject& po, double timeOfFallinSeconds)
{
  float vFinal = environment.gravity * timeOfFallinSeconds;
  return vFinal;
}



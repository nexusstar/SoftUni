#include "Car.h"

void repairEngine(Car &aCar)
{
  if(aCar.isEngineBroken == false) return;
  aCar.isEngineBroken = false;
}

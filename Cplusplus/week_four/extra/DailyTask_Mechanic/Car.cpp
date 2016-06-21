#include "Car.h"

void repairEngine(Car &aCar)
{
  if(aCar.isEngineBroken == true) return;
  aCar.isEngineBroken = false;
}

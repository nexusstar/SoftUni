#include "Mechanic.h"

float priceForRepair(Car &aCar)
{
  return aCar.price * 0.05;
}

void repairCar(Car &aCar)
{
  if(aCar.needsARepair == false) return;
  aCar.needsARepair = false;
}

#include "mechanic.h"

float Mechanic::carRepairPrice(Car &aCar)
{
  return aCar.price * 0.05;
}

void Mechanic::repairCar(Car &aCar)
{
  if(aCar.needsRepair == false) return;
  aCar.needsRepair = false;
}

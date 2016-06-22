#include "man.h"
#include "car.h"

void Man::crashCar(Car &aCar)
{
  if(aCar.needsRepair == true) return;
  aCar.needsRepair = true;
}

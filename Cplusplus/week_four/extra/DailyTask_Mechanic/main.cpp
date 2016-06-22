#include <iostream>
#include "man.h"
#include "mechanic.h"

int main()
{
  Car ford =  Car(1000);
  Mechanic fordGuro;
  Man goshoForda;

  std::cout << fordGuro.carRepairPrice(ford) << std::endl;
  fordGuro.repairCar(ford);
  goshoForda.crashCar(ford);

  return 0;
}

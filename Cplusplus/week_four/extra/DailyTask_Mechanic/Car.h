#pragma once
class Mechanic;
class Car
{
  friend class Mechanic;
  private:
    bool isEngineBroken;
    bool needsARepair;
  public:
    float price;
    Car(bool engineStatus, float aPrice):
      isEngineBroken(engineStatus),
      needsARepair(engineStatus),
      price(aPrice)
  {};
};


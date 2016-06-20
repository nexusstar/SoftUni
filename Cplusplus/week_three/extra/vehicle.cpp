#include <iostream>

class Vehicle
{
  public:
    int numberOfUsers;
    float maxSpeed;
};

class Car : public Vehicle
{
  public:
    float horsePowers;
    int numberOfSeats;
    float rimSize;
};

class PickUpTruck : public Car
{
  public:
    float truckSurface;
    float truckSize;
    float maxPayloadWeight;
};

class Hatchback : public Car
{
  public:
    float fuelConsumption;
    bool hasSunRoof;
};

int main()
{
  PickUpTruck fordRam;
  fordRam.maxSpeed = 200;
  fordRam.horsePowers = 350;
  fordRam.maxPayloadWeight = 3000;
  fordRam.rimSize = 21;

  Hatchback opelAstra;
  opelAstra.maxSpeed = 280;
  opelAstra.horsePowers = 50;
  opelAstra.rimSize = 15;
  opelAstra.hasSunRoof = true;

  std::cout << fordRam.maxSpeed << std::endl;
  std::cout << fordRam.horsePowers << std::endl;
  std::cout << fordRam.maxPayloadWeight << std::endl;

  std::cout << opelAstra.maxSpeed << std::endl;
  std::cout << opelAstra.horsePowers << std::endl;
  std::cout << opelAstra.hasSunRoof << std::endl;

  return 0;
}

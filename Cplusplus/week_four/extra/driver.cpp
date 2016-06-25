#include <iostream>

using std::string;

class Driver
{
  public:
    string id;

};


class MotorcycleDriver : public Driver
{
  public:
    char category;
};

class CarDriver : public Driver
{
  public:
    int maxPassenger;
};


class Women : public MotorcycleDriver, public CarDriver
{
  private:
  int age;
  public:
  string name;
};


int main()
{
  Women aWoman;
  aWoman.CarDriver::id = "8302euwou";
  aWoman.MotorcycleDriver::id = "fjd803810280";
  aWoman.maxPassenger = 5;
  aWoman.category = '1';
  aWoman.name = "Elza Pretty";

  return 0;
}

#include <iostream>


class Vehicle
{
  private:
    std::string registration_num;
    float weight;
    short int number_of_seats;
    std::string chassis_num;
    std::string engine_num;
    std::string owner;
  public:
    std::string GetRegistraionNum() const{ return registration_num;}
    float GetWeight() const{ return weight; }
    short int GetNumberOfSeats() const{ return number_of_seats; }
    std::string GetChasisNum() const{ return chassis_num; }
    std::string GetEngineNum() const{ return engine_num; }
    std::string GetOwner() const{ return owner; }
};

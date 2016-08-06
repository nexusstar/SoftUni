#include <iostream>
#include <string>
#include "Vehicle.h"

/// Console constructor
Vehicle::Vehicle()
{
  std::string registrationNumber;
  float weight;
  short int seatsCount;
  std::string chassisNumber;
  std::string engineNumber;
  std::string owner;
  unsigned short int dayFirstRegistration;
  unsigned short int monthFirstRegistration;
  unsigned short int yearFirstRegistration;
  unsigned short int dayCurrentRegistration;
  unsigned short int monthCurrentRegistration;
  unsigned short int yearCurrentRegistration;
  Date dateFirstRegistration;
  Date dateCurrentRegistration;

  std::cout << "Enter registration number:" << std::endl;
  std::cin >> registrationNumber;
  Vehicle::setRegistrationNumber(registrationNumber);

  std::cout << "Enter vehicle weight:" << std::endl;
  std::cin >> weight;
  Vehicle::setWeight(weight);

  std::cout << "Enter vehicle seat count:" << std::endl;
  std::cin >> seatsCount;
  Vehicle::setSeatsCount(seatsCount);

  std::cout << "Enter chassis number:" << std::endl;
  std::cin >> chassisNumber;
  Vehicle::setChassisNumber(chassisNumber);

  std::cout << "Enter engine number:" << std::endl;
  std::cin >> engineNumber;
  Vehicle::setEngineNumber(engineNumber);

  std::cout << "Enter owner name:" << std::endl;
  std::cin >> owner;
  Vehicle::setOwner(owner);

  std::cout << "Enter vehicle first registration date:" << std::endl;
  std::cout << "Enter day:" << std::endl;
  std::cin >> dayFirstRegistration;
  std::cout << "Enter month:" << std::endl;
  std::cin >> monthFirstRegistration;
  std::cout << "Enter year:" << std::endl;
  std::cin >> yearFirstRegistration;
  dateFirstRegistration = Date(dayFirstRegistration, monthFirstRegistration, yearFirstRegistration);
  Vehicle::setDateFirstRegistration(dateFirstRegistration);

  std::cout << "Enter vehicle current registration date:" << std::endl;
  std::cout << "Enter day:" << std::endl;
  std::cin >> dayCurrentRegistration;
  std::cout << "Enter month:" << std::endl;
  std::cin >> monthCurrentRegistration;
  std::cout << "Enter year:" << std::endl;
  std::cin >> yearCurrentRegistration;
  dateCurrentRegistration = Date(dayCurrentRegistration, monthCurrentRegistration, yearCurrentRegistration);
  Vehicle::setDateCurrentRegistration(dateCurrentRegistration);
}

/// Prints out the vehicle information on console
void Vehicle::printVehicleInformation() const
{
  std::cout << this->_registrationNumber << std::endl
    << "Weight: " << this->_weight << std::endl
    << "Number of seats: " << this->_seatsCount << std::endl
    << "Chassis number: " << this->_chassisNumber << std::endl
    << "Engine number: " << this->_engineNumber << std::endl
    << "Owner: " << this->_owner << std::endl
    << "Date of first registration: " << this->_dateFirstRegistration.getDateToString() << std::endl
    << "Date of registration in country: " << this->_dateCurrentRegistration.getDateToString() << std::endl;
}

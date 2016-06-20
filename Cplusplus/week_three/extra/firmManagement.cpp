#include <iostream>

class Boss
{
  float salary;
  public:
  float managerSalary;
  float workerSalary;
};

class Manager: private Boss
{
  float salary;
  public:
  float workerSalary;

};

class Workder: private Manager
{
  float salary;
};

#include <iostream>
#include <string>

using namespace std;

class Car
{
  public:
    string make;
    string model;
    float horsePower;
    double timeTo60mph;
    float fuelConsumption;
    bool isRunning;

    void run();
    void stop();
};

void Car::run()
{
  isRunning = true;
}

void Car::stop()
{
  isRunning = false;
}

int main(int argc, char ** argv)
{
  Car fordMustangRTR;
  fordMustangRTR.make = "Ford";
  fordMustangRTR.model = "Mustang RTR";
  fordMustangRTR.horsePower = 510;
  fordMustangRTR.isRunning = false;

  Car fordFocus;
  fordFocus.make = "Ford";
  fordFocus.model = "Fiesta";
  fordFocus.horsePower = 60;
  fordFocus.isRunning = false;

  cout << fordMustangRTR.make << " " << fordMustangRTR.horsePower << endl;
  cout << fordFocus.make << " " << fordFocus.horsePower << endl;

  cout << fordMustangRTR.model << " is running = " << fordMustangRTR.isRunning << endl;
  //start
  fordMustangRTR.run();

  cout << fordMustangRTR.model << " is running = " << fordMustangRTR.isRunning << endl;


  return 0;
}

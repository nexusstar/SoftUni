#include <string>
#include "Level.h"

class Building
{
  private:
    std::string _name;
    int _floors;
    int _offices;
    int _employees;
    int _freeSeats;

  public:
    Level specialLevel;
    void name(std::string newName) { _name = newName; };
    std::string getName(){ return _name; }

    void floors(int count){ _floors = count; }
    int getFloors(){ return _floors; }

    void offices(int count){ _offices = count; }
    int getOffices(){ return _offices; }

    void employees(int count){ _employees = count; }
    int getEmployees(){ return _employees; }

    void freeSeats(int count){ _freeSeats = count; }
    int getSeats(){ return _freeSeats; }

    Building(
        std::string newName,
        int floorCount,
        Level newSpecialLevel,
        int officeCount,
        int employeesCount,
        int seatsCount
        );

    ~Building();
};

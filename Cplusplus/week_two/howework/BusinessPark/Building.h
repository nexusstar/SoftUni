#include <string>

class Building
{
  private:
    std::string _name;
    int _floors;
    int _offices;
    int _employees;
    int _freeSeats;

  public:
    void name(std::string newName);
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
        int officeCount,
        int employeesCount,
        int seatsCount
        );
    ~Building();
};

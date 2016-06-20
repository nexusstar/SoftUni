#include "FacultyMember.h"

class Teacher : public FacultyMember
{
  private:
    float _monthSalary;
    short int _daysPassed;

  public:
    float Salary(){ return _monthSalary; };
    void setSalary( float newSalary ) { _monthSalary = newSalary; };

    short int daysPassed(){ return _daysPassed; }
    void setDays(short int newDays ){ _daysPassed = newDays; }
};

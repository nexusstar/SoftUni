#include "FacultyMember.h"

class Teacher : public FacultyMember
{
  private:
    float _mSalary;
    short int _daysPassed;

  public:
    float mSalary(){ return _mSalary; };
    void setSalary( float newSalary ) { _mSalary = newSalary; };

    short int daysPassed(){ return _daysPassed; }
    void setDays(short int newDays ){ _daysPassed = newDays; }
};


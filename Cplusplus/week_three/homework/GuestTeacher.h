#include "Teacher.h"

class GuestTeacher : private Teacher
{
  private:
    float _courseSalary;
  public:
    float courseSalary(){ return _courseSalary; }
    void setSalary( float newCourseSalary ){ _courseSalary = newCourseSalary; }
};

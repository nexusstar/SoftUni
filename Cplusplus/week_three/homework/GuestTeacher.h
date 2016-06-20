#include "Teacher.h"

class GuestTeacher : public Teacher
{
  private:
    float _courseSalary;
  public:
    float Salary(){ return _courseSalary; }
    void setSalary( float newCourseSalary ){ _courseSalary = newCourseSalary; }
};

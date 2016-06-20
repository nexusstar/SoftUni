#include "FacultyMember.h"

class Student : public FacultyMember
{
  private:
    int _coursePoints;
    float _averageMark;

  public:
    int coursePoints(){ return _coursePoints; }
    void setCoursePoints( int newPoints );

    float averageMark(){ return _averageMark; }
    void setAverageMark(float newMark ){ _averageMark = newMark; }

};

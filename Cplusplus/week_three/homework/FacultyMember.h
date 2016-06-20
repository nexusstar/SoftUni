#pragma once

#include <string>

class FacultyMember
{
  private:
    std::string _name;
    std::string _currentCourse;

  public:
    std::string name(){ return _name; };
    void setName( std::string newName ){ _name = newName; };

    std::string currentCourse(){ return _currentCourse; };
    void setCourse( std::string newCourse ) { _currentCourse = newCourse; };

};

#pragma once

#include <iostream>
#include <string>

class FacultyMember
{
  private:
    static short nextID;
    std::string _name;
    std::string _currentCourse;

  public:
    short ID;
    FacultyMember();
    ~FacultyMember();
    std::string name(){ return _name; };
    void setName( std::string newName ){ _name = newName; };

    std::string currentCourse(){ return _currentCourse; };
    void setCourse( std::string newCourse ) { _currentCourse = newCourse; };
    void showMember(){ //showing parent members
      std::cout << this -> name() << std::endl;
      std::cout << "with ID: " << this -> ID << std::endl;
    }
};

//This approach is wrong it increment at every child object
//TODO: find a way to use one counter starting from 0 in every Class
short FacultyMember::nextID = 0;

FacultyMember::FacultyMember()
{
  ID = ++nextID;
}
FacultyMember::~FacultyMember()
{
}

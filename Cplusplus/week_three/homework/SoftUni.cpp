//SoftUni.cpp main entry point of application
//
#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
  Student aStudent;
  aStudent.setName("Some Random Name");
  aStudent.setCourse("C++ oop basic");

  cout << aStudent.name() << endl;


  return 0;
}

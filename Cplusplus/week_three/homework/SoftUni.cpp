//SoftUni.cpp main entry point of application
//
#include <iostream>
#include "SoftUni.h"

using namespace std;

int main()
{
  //build a Student
  Student aStudent;
  aStudent.setName("Some Random Name");
  aStudent.setCourse("C++ OOP basic");

  //build a Teacher
  Teacher aTeacher;
  aTeacher.setName("Bill Gates");
  aTeacher.setDays(100);
  aTeacher.setSalary(4500);

  //build a GuestTeacher
  GuestTeacher aGuestTheacher;
  aGuestTheacher.setName("Mark Zuckenberg");
  aGuestTheacher.setSalary(10000);

  cout << aStudent.name() << endl;
  cout << aTeacher.Salary() << endl;
  cout << aGuestTheacher.Salary() << endl;
  cout << aStudent.ID << endl;
  cout << aTeacher.ID << endl;
  cout << aGuestTheacher.ID << endl;

  //Build SoftUni
  SoftUni aSoftUni;
  aSoftUni.addStudent(aStudent);
  /* aSoftUni.addTeacher(aTeacher); */
  /* aSoftUni.addGuestTeacher(aGuestTheacher); */

  cout << "Getting Student by ID ";
  aSoftUni.getStudentByID(1);

  return 0;
}

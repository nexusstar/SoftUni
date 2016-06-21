#include <iostream>
#include <climits>
#include "Student.h"
#include "GuestTeacher.h"

class SoftUni
{
  private:
    Student* students[USHRT_MAX];
    Teacher* teachers[USHRT_MAX];
    GuestTeacher* guestTeachers[USHRT_MAX];

  public:
    void getStudentByID( short int UID ) { return students[UID] -> showMember(); };
    void getTeacherByID( short int UID ) { return teachers[UID] -> showMember(); };
    void getGuestTeacherById( short int UID ){ return guestTeachers[UID] -> showMember(); };

    void addStudent( Student newStudent ){ students[newStudent.ID] = &newStudent; };
    void addTeacher( Teacher newTeacher ){ teachers[newTeacher.ID] = &newTeacher; };
    void addGuestTeacher( GuestTeacher newGuestTecher ){ guestTeachers[newGuestTecher.ID] = &newGuestTecher; };
};

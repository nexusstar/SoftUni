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
    void getStudentByID( short int UID ) { return students[UID] -> show(); };
    void getTeacherByID( short int UID ) { return teachers[UID] -> show(); };
    void getGuestTeacherById( short int UID ){ return guestTeachers[UID] -> show(); };

    void addStudent( Student newStudent ){ students[newStudent.ID] = &newStudent; };
    void addTeacher( Teacher newTeacher ){ teachers[newTeacher.ID] = &newTeacher; };
    void addGuestTeacher( GuestTeacher newGuestTecher ){ guestTeachers[newGuestTecher.ID] = &newGuestTecher; };
};

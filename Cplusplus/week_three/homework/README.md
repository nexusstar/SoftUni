# Homework 3

Task 1:
Make a program that is used to provide data about students, teachers and guest teachers in
SoftUni.

The data for studens:

- Id (0-65535)
- Name (std::string)
- Current course (only one must be written here)
- Current points for the course (0 – 100)
- Average evaluation mark ( 2.00 – 6.00, if this is the first course of the student 0
must be shown)

The data for teachers

- Id (0-65535)
- Name (std::string)
- Current course (only one must be written here)
- Monthly salary (float)
- How many days have passed since he joined SoftUni (0 – 65535)
The data for guest teachers
- Id (0 – 65535)
- Name (std::string)
- Current course
- Salary for course

_Use as many child/parent classes as you think for needed!_

How the program will be used:

1. User starts the program and choses option with number entered from keyboard:
1. Get data for student with ID
2. Get data for teacher with ID
3. Get data for gest teacher with ID
4. Add data for new student
5. Add data for new teacher
6. Add data for new guest teacher

When user chooses the option that desires if it is a “Get data” all the information
described above is shown. If the user chooses option that is “Add data” he is asked
to write all the parameters and they are then they are stored in the program.

Maximum students that can be stored in the program are 65535

Maximum teachers that can be stored in the program are 65535

Maximum guest teachers that can be stored in the program are 65535

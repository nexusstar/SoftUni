# Dynamic Memory and Classes

_letting the program decide about memory during runtime rather than compile time_

C++ use `new` and `delete` for utilization of dynamic memory control.

## Static member

A static member is created only once, regardless of the number of object created.

That is a static member is shared among all objects of that class, much as a phone number is shared among family members.

This is convenient for data that should be private for a class but that should have the same value for all class objects.

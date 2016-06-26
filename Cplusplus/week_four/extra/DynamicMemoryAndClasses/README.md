# Dynamic Memory and Classes

_letting the program decide about memory during runtime rather than compile time_

C++ use `new` and `delete` for utilization of dynamic memory control.

## Static member

A static member is created only once, regardless of the number of object created.

That is a static member is shared among all objects of that class, much as a phone number is shared among family members.

This is convenient for data that should be private for a class but that should have the same value for all class objects.

_you cannot initialize a static member inside the class declaration_

    A static data member is declared in the class declaration and is initialized in the file containing the class methods. The scope operator is used in the initialization to indicate to which class the static member belongs. However, if the static member is a const integral type or an enumeration type, it can be initialized in the class declaration itself.

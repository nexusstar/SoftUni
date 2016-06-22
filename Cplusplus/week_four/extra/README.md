# Object and Classess notes

A _class_ is a C++ vihicle for translating an abstraction to a user-defined type.
It combines data representation and methods for manipulating that data.

  What is an interface?
  An _interface_ is a shared framework for interaction between two systems.

In C++ _typicaly_ interface is placed in header file in the form of class definition
and the implementation (code for class methods) in a source file.

### Access control

Keywords _public_,  _private_ and _protected_
  _public_ - any program that uses an object of a particular class can access this members
  _private_ - any program can access this members only using public member functions *or using friend*
  _protected_ - 

### Constructors

There are two ways to initialize an object using constructor.


```c++
    Book aBook = Book("Hitchhiker's Guide to the Galaxy", "Douglas Adams", 42);
    Book bBook("Hitchhiker's Guide to the Galaxy", "Douglas Adams", 42);

    Book *hgtg = new Book("Hitchhiker's Guide to the Galaxy", "Douglas Adams", 42);
```

Third one creates a object and assign the address of the object to the pointer.

Another example:

    Bozo(const char * fname, const char * lname); // constructor prototype

In this case, you can use it to initialize new objects as follows:
    Bozo bozetta = bozo("Bozetta", "Biggens"); // primary form
    Bozo fufu("Fufu", "O'Dweeb"); // short form
    Bozo *pc = new Bozo("Popo", "Le Peu"); // dynamic object

If C++11 rules are in effect, you can use list initialization instead:
    Bozo bozetta = {"Bozetta", "Biggens"}; // C++11
    Bozo fufu{"Fufu", "O'Dweeb"} // C++11;
    Bozo *pc = new Bozo{"Popo", "Le Peu"}; // C++11

### C++11 list initialization

```c++
    Book aBook = {"Hitchhiker's Guide to the Galaxy", "Douglas Adams", 42};
    Book bBook {"Hitchhiker's Guide to the Galaxy", "Douglas Adams", 42};
    Book cBook {}; //using default constructor
```

### `const` Member functions

Function promisess not to modify the invoking object.


### Operator overloading

    operator(argument-list)
    operator*() //overloads * operator
    operator+() //overloads + operator
    operator@() // NOT there is no C++ @ operator

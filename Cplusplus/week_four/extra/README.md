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


    A = B * 2.01

Translates to the following member function call:

    A = B.operator*(2.01);

_Remember the left operand is the invoking object_

    A = 2.01 * B; // cannot correnspod to a member function

Compiler could match the expression to the following call

    A = operator(2.01, B);

This function would have this prototype:

    Aclass operator*(double m, const Aclass& a);

### Protocols

an abstract class that is inherited from multiple classes with 
simple functions.

For example class for communication it must have functions
for send, receive  and buffer.

### Multiple inheritance

When derived from multiple classes and have member overloading
when initialize it needs to specify from which class is
this member

## Special Member functions

C++ automaticaly provides the following member functions:

* A default constructor if you define no constructor
* A default destructor if you don't define one
* A copy constructor if you don't define one
* An assignment operator if you don't define one

### Copy constructor

A copy constructor is used to copy an object to a newly created object. That is, it's used during initialization.
Including passing function arguments by value and not during ordinary assignment. A copy constructor of class
has this protoype:
    Class_name(const Class_name &);

#### When it's used

A copy constructor is invoked whenever a new object is created and initialized to an existing object of the same kind.

    Class_name classFoo;
    Class_name classBoo(classFoo);
    Class_name classBoo = classFoo;
    Class_name classBoo = Class_name(classFoo);
    Class_name * pClass_name = new Class_name(class_Foo); //initialize an anonymus object to class_Foo and points to it

_Copy constructor is used when a function passes an object by value or when a function return an object_

#### What it does

The default copy constructor performs member-to-member copy of the _nonstatic members_ (shawllow copy) 

    Class_name classBoo = classFoo;
    //equals
    Class_name classBoo;
    classBoo.memberOne = classFoo.memberOne;
    classBoo.memberTwo = classFoo.memberTwo;

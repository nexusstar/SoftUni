#Leagacy code

## typedef

`typedef` is used to create custom types
```c++
    typedef unsigned long ULONG;

    //the following two objects have the same type
    unsigned long u;
    ULONG u1;
```

##Function pointers

* Decide at runtime what function to execute
* In C, there was one way: function pointers
* C++ way is using polymorphism
    Account -> Udate() will use right subclass's Update method
* C++11 added labdas
    put the actual code to execute as a parameter to another call

* Function pointers are easy to set and use
    Method = CalculateSlowly;
    Method(a,b,c);

Function pointers are declared with `typedef`

```c++
    typedef int (*CHANGER)(int i);
    CHANGER f;
```

Says that `chanager` is a pointer to a function that takes an
integer called i and returns an int.

Function pointers are typed so a pointer to a function
that points to a funciton that takes an integer cannot be
used to point to a function that takes strings etc.

### Pointers to member function

Include the class name when setting up the typedef

```c++
    typedef int(Utility::*UF)();
```
Use the class name and address-of operator when setting

```c++
    UF action;
    action = &Utility::triplex;
```
Dereference when using

```c++
    return(u.*action)();
```

##Void pointer `void*`

* Used to indicate a pointer to anything
* Any kind of pointer (`char*`, `int*`, `Employee*`...) can be cast to it.
* In modern code, use a pointer to a base class
  - then polymorphism
  - or dynamic_cast<>
  - `void*`

_avoid using `void*` pointer_

## C-style arrays

_collection of all the same kind of elements_

* Declare on the stack in local scope

```c++
    type name[elements];
    int ints[5];
```
* Declare on the heap (free store)

```c++
    type* name = new type[size]; // memory leak here
    delete[] name; // must be deleted manually

    int* aInts =  new int[4];
    aInts[0] = 1;
    aInts[1] = 2;
    *(aInts + 2) = 3; // two from the start
    *(aInts + 3) = 4; // three from the start

    delete[] aInts;
```
_ when declared on the heap the used memory must be freed after use _

* Using pointer manipulation to access elements of an array

```c++
    *(anArray + 2) = value; // access 3th element and assign value to it
```
Use array as pointer and dereference it and access




#Pointers & Reference

* Pointer is a variable _that holds the address of another variable_

  - Pointer can be used to get to the original place that it was pointing to.
  - Change the value that it points to.
  - Pointer can be changed to point to something else.
  - Pointer has it's own memory address
  - Pointer can be assigned NULL directly with `nullptr`


```c++
    int A;
    int* pA = &A;
    int *pA = &A;
    //to get throught the pointer to its target
    *pA = 5;
    int *pN = NULL;

```
  - Pointer can point to object
```c++
    Person p1;
    Person* pA = &p1;
    p1.GetName();
    // Two posible way to use pointer with object
    (*pA).GetName();
    pA->GetName()
```

## Reference

* Reference refer to original address of referee
* Reference should be assigned on initialization
* Reference take up space in the stack
* There are no such thing as Null reference it always need to be initialized
```c++
  int A = 5;
  int &rA = A;
  int &rN = NULL //Compile error
```
## Const

* A way to commit to the compiler that value would not be changed
  - When declaring a local value
    const int zero = 0;
  - As a function parameter
    int foo(const int i)

  - When we want not to copy the object because the copy is "expensive" we pass it by reference but if we _want to prevent some code to change it we add `const`_
    int something(const Person& p)
*I give you reference to spare the copy but don't give you right to change it*

  - Modifier on member function
    int GetName() const;
*I state that this function does not change any of the member variable of this Class*

## Const with Pointers

* Pointer can be `const`
    int* const cpX
  -then you can not change it to point to something else

* OR pointer can point to something that is `const`
    const int* cpX
  - then the pointer can't be used to change what it points to




#Pointers & Reference

* Pointer is a variable _that holds the address of another variable_

  - Pointer can be used to get to the original place that it was pointing to.
  - Change the value that it points to.
  - Pointer can be changed to point to something else.
  - Pointer has it's own memory address
  - Pointer can be assigned NULL directly


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
```c++
  int A = 5;
  int &rA = A;
  int &rN = NULL //Compile error
```

# Memory management & optimization

## Stack vs Heap

* Stack - fast memory using FILO sorted order to collect data

* Heap - fast memory used with tree based structure. The data is not ordered.

### Static memory allocation

* Data goes in the stack

* The memory is deallcated when the data goes out of scope.

* Good for short life variables

## Dynamic memory allocation

* Data goes into the heap

* We use pointers to point and use object

* Good for long life or dynamic chagges:W

## Reference counting

* A simple counter that contain number of current uses of an object.

### Smart pointer

* In order to create dynamically allocated objects and then don't give
a dame of memory allocation

```cpp
    int main()
    {
      for (int i=0; i<1000; i++)
        {
          std::auto_ptr<SomeClass> someObject(new SomeClass());
          someObject -> someLargeArray[0] = 5;
        }
        return 0;
    }
```

#### Smart pointers type

* Unique
  - Non copyable(use std::move). Institute the concept of ownership.

* Shared
  - Reference counted
      Assignment, for example, would increase the count by one, and the
      expiration of a pointer would decrease the count by one. Only when
      the final pointer expires would `delete` be invoked.

* Strong

* Week
  - let's you peak inside a shared_ptr without bumping the reference count

## List

### Initialization

```cpp
    std::list<int>first;                               //empty list of ints
    std::list<int>second(4,100);                       //four ints with value 100
    std::list<int>third(second.begin(), second.end()); //iterating through second
    std::list<int>fourth(third);                       //a copy of third
```


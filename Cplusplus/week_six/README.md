# Memory management & optimization

## Stack vs Heap

* Stack - fast memory using FILO sorted order to collect data

* Heap - fast memory used with tree based structure. The data is not ordered.

### Static memory allocation

* Data goes in the stack

* The memory is deallocated when the data goes out of scope.

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
* List is faster than vector for adding new elements

* Slower than vector for accessing elements

## Queue, dequeue

push and pop from one or both ends, FIFO collections.

* priority_queue

## Set

Sets are containers that store _unique elements following a specific order_
The value of the element can not be modified once in container.

The elements in a set are always sorted following specific _week ordering_ criterion

useful for mathematical operations like union or difference

## Multimap

Map that can have more than one value for a given key

# Sorting and searching

* Implement as functions that take a collection rather than as
methods of the collection

  - actually, iterators that give access to the collection

* for_each

* find_if

* #include <algorithm>

* Much nicer with lambdas



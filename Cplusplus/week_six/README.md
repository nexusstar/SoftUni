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

* Shared

* Strong

* Week


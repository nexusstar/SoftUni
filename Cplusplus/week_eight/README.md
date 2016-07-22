#Exceptions

_Errors and failures happen_

## Expected errors

Simplest way is to test for them

##Exceptions

Transfer flow of execution from the problem location to somewhere that can handle it.

Deal with it as close to the source as it happens.

```c++
    try
    {
      //risky stuff
    }
    catch(out_of_range& e)
    {
      e.what();
    }
    catch(exception& e)
    {
      e.what();
    }
```

## std::exception

* Has a member function: what() - returns a string

* Has a number of derived classes

* logic_error:

    - domain_error
    - invalid_argument
    - length_error
    - out_of_range

* runtime_error

  - overflow_error
  - range_error
  - underflow_error

## RAII Revisite _resource acquisition is initialization_

    When acquire a resource like getting some memory off the
    free store or opening a file or getting a database connection,
    what really should be done is initialize a object.
    And destructor of that object should release the memory
    close the file close the conection etc.

```c++
  try
  {
    auto x = new X(Stuff);
    /* risky stuff */ // if something happens result is memory leak
    delete x;
  }
  catch(exception& e)
  {
    //react
  }
```

Using RAII do not manually manage memory

```c++
    try
    {
      auto x = make_shared<X>(Stuff);
      /* risky stuff */
    }
    catch (exception& e)
    {
      //react
    }
```

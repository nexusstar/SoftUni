# Multi threading & Multiprocessing

Multithreading is an ability of a platform(Operating System, Virtual Machine etc.) or application to create a process that consists of multiple threads of execution (threads). A thread of execution is the smallest sequence of programming instructions that can be managed independently by a scheduler.

In Multicore and Multiprocessor systems Multithreading means that diferent threads are executed at the same time on different cores or processors.

For single core systems multithreading divides the time between the treads. The operating system in turns sends a certain number of instructions from each thread to the processors. Threads are not executed simultaneously. Operating System only simulates their simultaneous execution. This feature of the operating system is called multithreading.


## How to create a thread

1. Include `thread` header
```c++
    #include <thread>
```
2. Create object of thread class
```c++
    thread aThred;
```
3. Initialize the thread
```c++
    thread aThread(threadFunc); // pass function to thread
```
4. Join threads

Threads joining is done by using `join())` member function of thread class
This function returns only after all the threads are terminated. It means that the main thread will wait until child thread does not finish its execution.
```c++
    aThread.join();
```
### Joinable and not joinable threads

After `join()` returns, thread becomes _not joinable_.

A joinable thread is a thread that represents a thread of execution which has not yet been joined.

Thread can be checked if is joinable with `joinable()`
```c++
    bool joinable()
```
Returns `true` if thread is joinable and `false` otherwise.

```c++
    //pass function to thread
    thread aThred(thredFunc);

    //check if thread is joinable
    if (threadFunc.joinable())
    {
        //main is blocked until aThread is not finished
        aThread.join();
    }
```

### Detach thread

Threads becomes not joinable after `detach()` member function is called

```c++
    void detach();
```

This function detaches thread from the parent thread. It allows parent and child
threads to be executed independently from each other. After the call to `detach()`
the threads are not synchronized in any way

```c++
    aThread.detach();
    if(aThread.joinable())
    {
      //main is blocked until aThread() is not finished
      aThread.join();
    }
    else
    {
        std::cout << "aThread is detached";
    }
```

### Initializing thread with an object

For initializing thread can be used function object (functor)
or a member function of a class.

#### Using functor

_A functor is an object of a class that overloads `()` operator._

If we want to initialize a thread with an object of a class, this class
should overload `()` operator. It can be done like this:

```c++

    class myObject
    {
      public:
        void operator()()
        {
          cout << "This is my functor";
        }
    };

```

Now we could initialize a thread by passing an object of the class `myObject`
to the constructor of the thread

```c++

    myObject aObjectFunc;
    thread aThread(aObjectFunc);
    if(aThread.joinable());
      aThread.join();

```
#### Using public member function

In order to use public member function of a class, we need to specify
_the indentifier of this function and pass an object of the class, which defines this member function_

```c++
    class myObjectClass
    {
    public:
      void operator()()
      {
        cout << "This is need to make a functor";
      }
      void publicFunction()
      {
        cout << "public function of myFunctor class is called"; << endl;
      }
    };

    int main()
    {
      myObjectClass aObject;
      thread functorTest(&myObjectClass::publicFunction, aObject);
      if (functorTest.joinable())
        functorTest.join();
    }
```

#### Passing arguments to thread

Initialize with a function to which we can pass arguments

```c++

    void printValues( int val, char* std, double dval)
    {
      cout << val << " " << str << " " dval << endl;
    }

    int main()
    {
      char* str ="Hello thread!";

      thread paramThread(printValues, 5, str, 3.2);
      if(paramThread.joinable())
        paramThread.join();
    }
```
_When you want to initialize a thread with an object with parameteres, we have
to add corresponding parameter list to the oveloading version of operator `()`_

```c++
  class myObjectClass
  {
    public:
      void operator()(int* arr, int length)
      {
        cout << "An array of length " << length << "is passed to thread" << endl;
        for(int i = 0; i != length; ++i)
          cout << arr[i] << " " endl;
        cout << endl;
      }
  };

  int main()
  {
    int arr[5] = { 1, 2, 3, 4, 5 };
     myObjectClass aObject;
     thread aThred(aObject, arr, 5);
     if(aThread.joinable())
      aTread.join();

    return 0;
  }
```
#### Thread ID

Every thread has it's unique identifier. Class thread has public member function that returns the ID of the thread.

```c++
    id get_id();
```

_the returned type is of type id_

#### this_thread Namespace

_ `this_thred` namespace from thread header offer possibilities to work with current thread. _

1. `id get_id()` - return the id of current thread.

2. template
    `void sleep_until(const chrono::time_point <Clock, Duration>& abs_time)` -  blocks the current thread
    until abs_time is not reached.

3. template
    `void sleep_for(const chrono::duration<Rep,Period>& rel_time);` - thread is blocked during time span specified

4. `void yield()` - current thread allows implementation to reschedule the execution of thread. It used
to avoid blocking.

#### Concurrent access to resources



# Lambda

   An expression that represents doing something. When you write a lambda,
   the compiler generates an anonymous function object.
   _Overrides `(` operator - the function call. Parameters are in `()` of the lambda. Return type is after the `->` of the lambda._

Imagine handling an operation or function (code) to
some other operation or function

* For generic work

* For a functional style

* For concurrency

* For readability
  - Eliminate tiny functions

```cpp
    int main()
    {
      vector<int> v;
      //...
      for_each(v.begin(), v.end(), [](int i){ cout << i << " ";});
    }
```

* Multiple statements in the lambda

```cpp
    for_each(v.begin(), v.end(), [](int n){
      cout << n;
      if( n % 2 == 0 ){
        cout << " even " << endl;
      } else {
        cout << " odd " << endl;
        }
    });
```

* Returning a value

  - Lambdas my return a value
  - Only a return statement in the lambda
    - Return type inferred by compiler
  - More than one statement
    - developer must specify return type

    [] (int i) -> double { /* . . . */ }

_deducing the return type from the code_

```cpp

  vector<int> v2;
  transform(v.begin(), v.end(), back_inserter(v2),[](int n){ return n*n});
  for_each(v2.begin(), v2.end(), [](int n) { cout << n << " "; });

```
_explicitly specify the return type_

```cpp
  vector<double> dv;
  transform<v.begin(), v.end(), back_inserter(dv), [](int n) -> double{
      if(n % 2 == 0 ){
        return n * n * n;
      } else {
        return n / 2.0;
      }
    }
  });
```
## [] - The capture

_`[]` in lambda is called the capture clause_

* Empty [] - captures nothing, works only with function parameters

* `[x, y]` - captures `x` and `y` by value from the scope where the lambda is called
  - copies are made
  - Lambda can be used when x and y have gone out of scope.

* `[&x, &y]` - captures x and y by reference
  - no copies, changes affect the originals
  - dangling references may be an issue

* `[=]` - copy "everything" by value
  - everything in the body of the lambda
* `[&]` - copy "everything" by reference
* `mutable` - allows body to modify the parameters captured by value. And to call their non-const member functions.

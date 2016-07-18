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




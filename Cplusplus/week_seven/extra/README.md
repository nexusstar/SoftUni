# c++ multithreading

Creating and launching a thread in c++11:

```c++
    #include<iostream>
    #include<thread>

    void call_from_thread(){
      std::cout << "Hello, world!";
      }
    int main() {
      std::thread t1(call_from_thread);

      // Join the thread with the main thread
      t1.join();

      return 0;
    }
```

On Linux the above could be compiled with

    g++ -std=c++11 -pthread file_name.cpp

On Mac with Xcode

    clang++ -std=c++11 -stdlib=libc++ file_name.cpp

When more than one thread are compiting for one and the same resource
threads could block each other.

_It is the programmer job to ensure that a group of threads won't block
trying to modify the same data_

_Every thread has to have an initial function where the new thread of 
execution begins_

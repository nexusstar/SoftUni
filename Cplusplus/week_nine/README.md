# The Concurency API

If we want to run a function asynchronously, there are two
approaches. We create `std::thread` and run function on it

    void doAsyncWork()
    std::thread t(doAsyncWork);

OR we can pass `doAsyncWork` to `std::async` - task based strategy

* The `std::thread` API offers no direct way to get return values from
asynchronous call

# Templates

Templates is a mechanism that allows a programmer to use types as parameters
for a class or a function. The compiler then generates a specific class or
function when we later provide specific types as arguments.

The C++ notation for introducing a type parameter T is the template<typename T> prefix,
 meaning "for all types T".

 Custom vector implementation example:

 ```c++

     template<typename T> class vector
     {
      int sz; //the size
      T* elem; // a pointer to elements
      int space;
      public: //size + free space
        vector() : sz{0}, elem{nullptr}, space{0}
        {
          for (int i=0; i<sz; ++i) elem[i]=0; // elements are initialized
        }
        vector(const vector&); //copy constructor
        vector& operator=(const vector&); //copy assignment
        vector(vector&&); //move assignment
        ~vector() { delete//  elem;}
        T& operator //(int n) { return elem[n];} //access return reference
        const T& opeartor//(int n) const { return elem[n];}
        int size() const{ return sz;}
        int capacity()const { return space;}
        void resize(int newsize);
        void push_back(const T& d);
        void reserve(int newalloc);
     };
```
_Templates_ provide in C++ mechanism for _Generic programming_:
  Writing code that works with a variety of types presented as arguments,
  as long as those argument types meed specific and semantic requirements.

When what we parametrize is a class, we get a class template,
what is oftern called a _parameterized type_ or a _parameterized class_.

When what we parametrize is a function, we get a _funciont template_, what
is often called a _parameterized function_ and sometimes also called an _algorithm_.
Those generic programming is sometimes referred to as _"algorithm-oriented programming"_.

Difference between OOP and _algorithm-oriented programming_

* _Generic programming_: supported by templates, relying on compile-time resolution.

* _Object-oriented programming_: supported by class hierarchies and virtual functions,
relying on run-time resolution.


# Manual memory managements

_If there's a pointer at some point you must call `delete`_

* What happens if someone copies it?
* What happens if the local variable (the pointer) goes out of scope early?

## Rule of three
* copy constructor
* copy assignment operator
* destructor

## Standard Library Smart Pointers

* `shard_ptr`
  - Referennce counted
* `weak_ptr`
  - Lets you "peak" at a shared_ptr without bumping the reference count
* `unique_ptr`
  - Non copyable (use `std::move`)

## Slicing

* IF you copy objects around, slicing can occur
  - Copy a derived object into a base object - extra member variables fall away
  - Can't copy a base object into a derived object
* Some rules apply when passing to a function by value
  - A copy is made
  - Slicing will happen
* Use references or pointers to avoid slicing
  - References use same syntax as solid objects

## Cast Operator

* (type)
  - C style cast
  - _super dangerous, doesn't tell humans much when they read your code
* static_cast<type>
  - compile time only
  - up to you to be sure it's safe
* dynamic_cast<type>
  - Rntime check
  -Works only when casting to pointer to a class with a virtual table.
  - Returns null if cast fails
  - slower but safer

`_static_cast` can safe you from yourself and don't use () casting

## Project Documentation

* Consist of documentation and information

  - both inside the source-code and outside

* External documentation

   - At a higher level than the code

   - Problem definition, requirements, architecture, design, project plans,
   test plans, etc.

* Internal

  - lower-level - explains a class, method or piece of code

### Self-Documenting Check list

* Methods
  - does each method name describe exactly what the method does?
  - does each method perform one well-defined task with minimal dependencies?

* Data Names
  - Are type names descriptive enough to help document data declaration?
  - Are variable used for a single purpose? Is this purpose
  well-defined?

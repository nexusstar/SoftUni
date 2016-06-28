# Manual memory managements

_If there's a pointer at some point you must call `delete`_

* What hapens if someone copies it?
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

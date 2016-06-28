# Pointers and inheritance

* A pointer to a derived class can be stored as pointer to the base class instead
  - Respects the "is a" relationship
  - vital to Liskov substitutability

  Example: We have base class _BankAccount_ with derived classes _CheckingAccount_
  and _SavingAccount_. A CheckingAccount _IS A_ BankAccount; a SavingAccount _IS A_
  BankAccount and if some function takes a BankAccount pointer, you can pass down
  a SavingAccount pointer, or a CheckingAccount pointer, and that function shouldn't
  complain and that is Liskov substitutability and in C++ it's done with pointers.

# Friend function and class

   >can access private and protected members


There are:

* Friend functions
* Friend classes
* Friend member functions

## Creating Friends

Create a prototype

    friend Aclass foo(Aclass& a);

* this is not a member function. So it isn't invoked by using the membership operator.

* this function has the same access rights as a member function

Create definition

    Aclass foo(Aclass &a)
    {/* do some stuff */}

Because it's not member function does not use `Aclass::` and `friend`


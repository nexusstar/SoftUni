#ifndef Figure_h
#define Figure_h

#include <iostream>
#include <map>

class Figure
{
  public:
    virtual double perimeter() = 0;
    virtual double surface() = 0;
};
#endif

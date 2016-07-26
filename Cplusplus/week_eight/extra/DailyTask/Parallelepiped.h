#ifndef Parallelepiped_h
#define Parallelepiped_h

#include "Solid.h"
#include "Rectangle.h"

class Parallelepiped : public Rectangle, public Solid
{
  public:
    Parallelepiped(double a, double b, double c) :
      Rectangle(a, b)
  {
    side['c'] = c;
  }
    double surface()
    {
      return 2.00f * (
          side['a'] * side['b'] +
          side['a']* side['c'] +
          side['b']* side['c']);
    }
    double volume()
    {
      return side['a'] * side['b'] * side['c'];
    }
    double perimeter()
    {
      return 4.00f * ( side['a'] + side['b'] + side['c'] );
    }
};
#endif

#ifndef Rectangle_h
#define Rectangle_h

#include "FigureWithAngles.h"

class Rectangle : public FigureWithAngles
{
  public:
    Rectangle(double sideA, double sideB)
    {
      side['a'] = sideA;
      side['b'] = sideB;
    }
    double perimeter(){ return 2.00f * (side['a'] + side['b']);}
    double surface(){ return side['a']*side['b'];}

};
#endif

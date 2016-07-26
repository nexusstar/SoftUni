#ifndef Circle_h
#define Circle_h
#include <math.h>
#include "FigureWithoutAngles.h"

class Circle : public FigureWithoutAngles
{
  public:
    Circle(double r):radius(r){}
    double perimeter(){return 2.0f * M_PI * r; }
    double surface(){ return M_PI * r * r;}
};
#endif

#ifndef Square_h
#define Squre_h

#include "Rectangle.h"

class Square : public Rectangle
{
  public:
    Square(double side): Rectangle(side, side){};

};
#endif

#ifndef Cube_h
#define Cube_h

#include "Parallelepiped.h"

class Cube : public Parallelepiped
{
  public:
    Cube(double side): Parallelepiped(side, side, side){};

};
#endif

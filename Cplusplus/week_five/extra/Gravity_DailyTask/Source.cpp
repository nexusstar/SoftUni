#include <iostream>
#include "Environment.h"
#include "PhisicalObject.h"
#include "PhisicsControl.h"

#define EARTH_GRAVITY 9.807
#define MOON_GRAVITY 1.622

int main()
{

  PhisicalObject myObject;
  myObject.setWeight(100);
  Environment Earth = Environment( EARTH_GRAVITY );
  Environment Moon = Environment ( MOON_GRAVITY );
  PhisicsControl EarthPhisicsControl = PhisicsControl(Earth);
  PhisicsControl MoonPhisicsControl = PhisicsControl(Moon);


  return 0;
}

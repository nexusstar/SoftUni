#include <iostream>

#include "Square.h"
#include "Cube.h"


int main()
{

  Rectangle aRectangle(2, 3);
  Cube aCube(2);
  Parallelepiped aParallelepiped(2.2, 3.2, 10.1);

  std::cout << aRectangle.surface() << std::endl;
  std::cout << aRectangle.perimeter() << std::endl;
  std::cout << aCube.volume() << std::endl;
  std::cout << aParallelepiped.volume() << std::endl;


  return 0;
}

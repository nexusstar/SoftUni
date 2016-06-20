#include <iostream>

class Cube
{
  public:
    double side;
};

double cubeVolume ( const Cube &cube )
{
  return cube.side*cube.side*cube.side;
}

double cubeSurface ( const Cube &cube )
{
  return 6*cube.side*cube.side;
}
double cubePerimeter (const Cube &cube )
{
  return 4*cube.side;
}

int main()
{
  Cube aCube;
  aCube.side = 10;

  std::cout << cubeVolume(aCube) << std::endl;
  std::cout << cubeSurface(aCube) << std::endl;
  std::cout << cubePerimeter(aCube) << std::endl;

  return 0;
}

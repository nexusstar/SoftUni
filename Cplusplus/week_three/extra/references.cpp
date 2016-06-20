#include <iostream>

class Rectangle
{
  public:
    double sideA;
    double sideB;
};

double caclPerimeter( const Rectangle &rect ) //make sure that function does not change class members
{
  return 2*(rect.sideA + rect.sideB);
}

int main()
{
  Rectangle aRect;
  aRect.sideA = 5;
  aRect.sideB = 10;

  std::cout << caclPerimeter(aRect) << std::endl;

  return 0;
}

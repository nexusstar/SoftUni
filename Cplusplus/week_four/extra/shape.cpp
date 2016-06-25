#include <iostream>

class Shape
{
  public:
    virtual float getPerimeter();
    virtual float getSurface();
};


class Rectangle : public Shape
{
  public:
    float sideA;
    float sideB;
    float getPerimeter() { return 2*sideA + 2*sideB; }
    float getSurface() { return sideA * sideB; }
};

class Circle : public Shape
{
  public:
    float diameter;
    float getPerimeter(){ return 3.141592 * diameter; }
    float getSurface() { return 3.14592 * diameter * diameter / 4; }
};



int main()
{
  Rectangle aRectangle;
  aRectangle.sideA = 5;
  aRectangle.sideB = 10;

  Circle aCircle;
  aCircle.diameter = 2;


  std::cout << aRectangle.getPerimeter() << std::endl;
  std::cout << aRectangle.getSurface() << std::endl;

  std::cout << aCircle.getPerimeter() << std::endl;
  std::cout << aCircle.getSurface() << std::endl;

  return 0;
}

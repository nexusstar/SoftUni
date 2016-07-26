#include <iostream>
#include <math.h>

class Shape{
  public:
    virtual double perimeter(){ return 0; }
    virtual double surface() { return 0; }
};

class Solid : public Shape{
  public:
    virtual double volume(){ return 0;}
};


class Rectangle : public Shape{
  private:
    double a;
    double b;
  public:
    double perimeter(){return 2*(a+b);}
    double surface(){return a*b;}
    Rectangle(double sideA, double sideB):
      a(sideA), b(sideB){};
    ~Rectangle(){};
};

class Circle : public Shape{
  private:
    double r;
  public:
    double perimeter(){ return 2*M_PI*r; }
    double surface(){ return M_PI*r*r; }
    Circle(double radius): r(radius){};
    ~Circle(){};
};

class Parallelepiped : public Solid {

  private:
    double a;
    double b;
    double c;
  public:
    double volume(){return a*b*c; }
    double perimeter(){ return 4*(a+b+c); }
    double surface(){ return 2*(a*b + a*c + b*c); }
    Parallelepiped( double sideA, double sideB, double sideC):
      a(sideA), b(sideB), c(sideC){};
    ~Parallelepiped(){};
};

class Cube : public Parallelepiped {
  public:
    Cube(double side):Parallelepiped(side, side, side){};
    ~Cube(){};
};

int main()
{
  Rectangle aSquare(3, 3);
  Rectangle aRectangle(2, 3);
  Circle aCircle(10);
  Parallelepiped aPrism(2.3, 2.3, 2.3);
  Cube aCube(2);

  std::cout << aSquare.surface() << std::endl;
  std::cout << aRectangle.perimeter() << std::endl;
  std::cout << aCircle.surface() << std::endl;
  std::cout << aPrism.surface() << std::endl;
  std::cout << aPrism.volume() << std::endl;
  std::cout << aCube.surface() << std::endl;
  std::cout << aCube.volume() << std::endl;

  return 0;
}



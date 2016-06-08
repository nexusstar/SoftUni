#include <cmath>
#include <iostream>

using namespace std;

class Position
{
  private:
    float _x;
    float _y;

  public:
    Position(float x, float y);
    Position();
    ~Position();
    float x(){ return _x; }
    void setX( float newX ){ _x = newX; }
    float y() { return _y; };
    void setY( float newY ){ _y = newY; }
};

Position::Position(float x, float y)
{
  setX(x);
  setY(y);
}
Position::Position()
{}
Position::~Position()
{}

class Size
{
  private:
    float _length;
    float _width;
  public:
    Size(float newLength, float newWidth);
    Size();
    ~Size();
    float getLength(){ return _length; }
    float getWidth(){ return _width; }
    void setLength( float newLength ){ _length = newLength; }
    void setWidth (float newWidth ){ _width = newWidth; }
};

Size::Size(float newLength, float newWidth)
{
  setLength(newLength);
  setWidth(newWidth);
}
Size::Size()
{}
Size::~Size()
{}

class Rectangle
{
  public:
    Rectangle(Position newPosition, Size newSize);
    Rectangle(float x, float y, float length, float width);
    ~Rectangle();
    Position position;
    Size size;
    float perimeter();
    float surface();
    float diagonal();
};

Rectangle::Rectangle(Position newPosition, Size newSize)
{
  position = newPosition;
  size = newSize;
}

Rectangle::Rectangle(float x, float y, float length, float width)
{
  position.setX(x);
  position.setY(y);
  size.setLength(length);
  size.setWidth(width);
}
Rectangle::~Rectangle()
{}
float Rectangle::perimeter()
{
  return 2*(size.getLength() + size.getWidth());
}

float Rectangle::surface()
{
  return size.getLength()*size.getWidth();
}

float Rectangle::diagonal(){
  return sqrt(pow(size.getLength(), 2.0) + pow(size.getWidth(), 2.0));
}

int main()
{
  Rectangle myRect(1, 2, 10, 20);
  cout << "myRect diagonal is: " << myRect.diagonal() << endl;
  cout << "myRect surface is: " << myRect.surface() << endl;
  cout << "myRect perimeter is: " << myRect.perimeter() << endl;

  Rectangle myRectTwo(Position(2,3), Size(2, 4));
  cout << "myRectTwo diagonal is: " << myRectTwo.diagonal() << endl;
  cout << "myRectTwo surface is: " << myRectTwo.surface() << endl;
  cout << "myRectTwo perimeter is: " << myRectTwo.perimeter() << endl;

  return 0;
}

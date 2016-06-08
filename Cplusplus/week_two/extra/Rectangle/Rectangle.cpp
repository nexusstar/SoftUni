#include <iostream>
using namespace std;

class Origin
{
  public:
    float x;
    float y;
};
class Size
{
  public:
    float height;
    float width;
};

class Rect
{
  private:
    double length;

  public:
    Origin origin;
    Size size;
    //Property
    double getLength();
    void setLength(double newLength);

    double area();
};

double Rect::getLength(){
  //do some calculation
  return length;
};

void Rect::setLength(double newLength)
{
  //some callculations
  length = newLength;
}

double Rect::area()
{
  return size.height * size.width;
}


int main(){
  Rect myRect;
  myRect.origin.x = 0;
  myRect.origin.y = 3;
  myRect.size.height = 3;
  myRect.size.width = 4;

  cout << myRect.area() << endl;

  return 0;
}

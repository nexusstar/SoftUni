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
  public:
    Origin origin;
    Size size;

    double area();
};

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


}

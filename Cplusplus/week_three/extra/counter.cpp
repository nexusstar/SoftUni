#include <iostream>
using namespace std;

class ClassOne
{
  public:
    static int c;
    void show()
    {
      cout << "I am ClassOne my Counter is " << c << endl;
    }
};

int ClassOne::c = 0;


class ClassTwo : public ClassOne
{
  public:
    static int c;
    void show()
    {
      cout << "I am ClassTwo my Counter is " << c << endl;
    }
};

int ClassTwo::c = c + 1;

class ClassThree : public ClassTwo
{
  public:
    static int c;
    void show()
    {
      cout << "I am ClassThree my Counter is " << c << endl;
    }
};
int ClassThree::c = c + 1;

int main ()
{
  ClassOne c1;
  ClassTwo c2;
  ClassThree c3a, c3b;

  cout << "c1: "; c1.show();
  cout << "c2: "; c2.show();
  cout << "c3: "; c3a.show();
  cout << "c3: "; c3b.show();

  return 0;
}

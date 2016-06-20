#include <iostream>

using namespace std;

class C1
{
  public:
    const static int c = 0;
    void show() { cout << "I am C1. My counter is " << c << endl; };
};

class C2 : public C1
{
  public:
    const static int c = c + 1;
    void show() { cout << "I am C2. My counter is " << c << endl; };
};

class C3 : public C2
{
  public:
    const static int c = c + 1;
    void show() { cout << "I am C3. My counter is " << c << endl; };
};

int main()
{
  C1 c1;
  C2 c2;
  C3 c3a, c3b;

  cout << "c1: "; c1.show();
  cout << "c2: "; c2.show();
  cout << "c3a: "; c3a.show();
  cout << "c3b: "; c3b.show();

  return 0;
}

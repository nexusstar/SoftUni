#include <string>
using namespace std;
class Animal
{
  private:
    int _numberOfLegs;
  public:
    Animal(int legs);
    ~Animal();
    string name;
    string spices;
    int age;
    int numberOfLegs();
    void setNumberOfLegs(int legs);
};

int Animal::numberOfLegs()
{
  return _numberOfLegs;
}

void Animal::setNumberOfLegs(int legs){
  if(legs < 0) return;
  _numberOfLegs = legs;
}

Animal::Animal(int legs)
{
  setNumberOfLegs(legs);
}

int main()
{
  Animal snake = Animal(0);
  Animal dog = Animal(4);

  return 0;
}

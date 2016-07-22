#include<iostream>


// Super dangerous
// takes whatever as a pointer
// cast it to int pointer and  prints it
// it does not care if it's a int
void UseSomething(void* something)
{
  int* s = (int*) something;
  std::cout << *s << std::endl;
}

struct Point{
  int x,y;
};

struct Noise{
  std::string say,who;
};

int main()
{

  int i = 1;
  Point p;
  p.x = 2;
  p.y = 2;
  Noise cat;
  cat.say = "Miau";
  cat.who = "Tom";
  std::string str =  "Hello void";


  UseSomething(&i); // 1
  UseSomething(&(p.x)); // 2 all good p.x is an int
  UseSomething(&p); // 2 look inside and get first member
  UseSomething(&str);
  UseSomething(&(cat.say)); // see no exception
  UseSomething(&cat);

  return 0;
}

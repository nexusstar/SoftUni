#include <stdio.h>
#include <iostream>

class Bunny
{
  public:
    Bunny(){ this -> name = "Gosho"; };
    unsigned char color[3];
    std::string name;
};

int main()
{
  Bunny aBunny;
  aBunny.color[0] = 0x0F;
  aBunny.color[1] = 0x0F;
  aBunny.color[2] = 0xEA;
  aBunny.name = "Pesho";

  Bunny bBunny;
  bBunny.color[0] = 0xEA;
  bBunny.color[1] = 0xEA;
  bBunny.color[2] = 0xEE;
  bBunny.name = "Niki";

  Bunny *pABunny = &aBunny;

  printf("%d, color\n", (int)pABunny -> color[0]);
  printf("%p, pointer\n", &pABunny -> color[0]);

  printf("%s, name\n", pABunny -> name.c_str()); // note the use of c_str()

  pABunny = &bBunny;

  printf("%s, name\n", pABunny -> name.c_str()); // note the use of c_str()

  return 0;

}

#include <stdio.h>

int main()
{
  int var = 10;
  printf("%d, with address: %p\n", var, &var);
  int *pVar = &var;
  printf("%d, point to address: %p\n", *pVar, pVar);

  return 0;

}

#include <stdio.h>

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *pA = a;
  printf("Array value %d, pointer to array value %d\n", a[3], pA[3]);
  printf("Array address %p, pointer to array address %p\n", &a[3], &pA[3]);
  printf("Array address %p, pointer address %p", &a, &pA);

  return 0;
}

#include <iostream>
#include <ctime>

#define MAXN 10000

unsigned long long fib[MAXN] = {0};

unsigned long long findFib( unsigned n )
{
  if ( 0 == fib[n] ){
    if (n < 2){
      fib[n] = 1;
    } else {
      fib[n] = findFib(n - 1) + findFib(n - 2);
    }
  }
  return fib[n];
}

void printFib (unsigned long long n)
{
  std::clock_t start;
  start = std::clock();
  for(unsigned i = 0; i != n; ++i){
    std::cout << "Fibonacci " << i <<  ": " <<  findFib(i) << " ";
    std::cout << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
  }
}

int main()
{
  printFib(100);

  return 0;
}

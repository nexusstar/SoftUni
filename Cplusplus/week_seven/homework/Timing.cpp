#include <ctime>
#include <iostream>

#define MAXN 10000

const unsigned n = 500;
unsigned primes[MAXN], pN = 0;

char isPrime( unsigned n )
{
  unsigned i = 0;
while (i < pN && primes[i] * primes[i] <= n){
    if(n % primes[i] == 0)
      return 0;
    i++;
  }
  return 1;
}

void findPrimes ( unsigned n )
{
  unsigned i = 2;
  while ( i < n )
  {
    if ( isPrime(i)){
      primes[pN] = i;
      pN++;
      std::cout << i << " ";
    }
    i++;
  }
}

int main()
{
  std::clock_t    start;

  start = std::clock();
  findPrimes(1000);

  std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
  return 0;
}

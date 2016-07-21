#include <ctime>
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <string>

#define MAXN 10000

std::vector<std::string> messages;

const unsigned n = 500;
unsigned primes[MAXN], pN = 0;

std::mutex m;

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
  std::clock_t start;
  start = std::clock();

  while ( i < n )
  {
    if ( isPrime(i)){
      primes[pN] = i;
      pN++;
      m.lock();
      std::cout << "Primes: "<< i << " ";
      std::cout << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) <<" ms" << std::endl;
      m.unlock();
    }
    i++;
  }
}

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
    m.lock();
    std::cout << "Fibonacci " << i + 1 <<  ": " <<  findFib(i) << " ";
    std::cout << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    m.unlock();
  }
}

int main()
{
  std::thread findPrimesThread(findPrimes, 100), findFibonaciThread(printFib, 20);
  findPrimesThread.join();
  findFibonaciThread.join();

  return 0;
}

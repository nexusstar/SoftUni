#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <cstdio>
#include <ctime>
 
// This method prints out given series of primes
void printSeriesOfPrimeNumbers(unsigned long long numberOfPrimeNumbersToCheck)
{
    for (unsigned long long i = 2; i < numberOfPrimeNumbersToCheck; i++)
    { 
        std::clock_t start;
        double duration;
        start = std::clock();
 
        for (unsigned long long j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (j + 1 > sqrt(i)) 
            {
                duration = (std::clock() - start) / ((double)CLOCKS_PER_SEC / 1000);
                printf("Prime %d, %.2f ms.\n", i, duration);
            }
        }
    }
}
 
// This method prints out given series of fibonacci numbers
// Code used: http://www.programmingsimplified.com/cpp/source-code/fibonacci-series
void printFibunacciNumbers(unsigned long long numberOfFibonacciNumbersToPrint)
{
    unsigned long long c, first = 0, second = 1, next;
 
    for (c = 0; c < numberOfFibonacciNumbersToPrint; c++)
    {
        std::clock_t start;
        double duration;
        start = std::clock();
 
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
 
        duration = (std::clock() - start) / ((double)CLOCKS_PER_SEC / 1000);
        printf("Fibonacci %d, %.2f ms.\n", next, duration);
    }
}
 
int main()
{
    std::mutex mtx;
    mtx.lock();
 
    std::thread threadOne(printSeriesOfPrimeNumbers, 100), threadTwo(printFibunacciNumbers, 20);
    threadOne.join();
    threadTwo.join();
 
    mtx.unlock();
 
    return 0;
}
#include <thread>
#include <mutex>
#include <math.h>
#include <string>
#include <cstdio>
#include <ctime>
#include <vector>

void printPrimes(unsigned n)
{
  std::vector<unsigned> sieve;
  unsigned j, i = 2;
  while (i <= n) {
    if (sieve[i] == 0) {
      std::cout << sieve[i] << " ";
      j = i * i;
      while (j <= n) {
        sieve[j] = 1;
        j += 1;
      }
    }
    i++;
  }
}

// This method prints out given series of fibonacci numbers
// Code used: http://www.programmingsimplified.com/cpp/source-code/fibonacci-series
void printFibunacciNumbers(unsigned long long numberOfFibonacciNumbersToPrint)
{
    unsigned long long c, first = 0, second = 1, next;

    for (c = 0; c < numberOfFibonacciNumbersToPrint; c++)
    {
        std::clock_t start;
        double duration;
        start = std::clock();

        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        duration = (std::clock() - start) / ((double)CLOCKS_PER_SEC / 1000);
        printf("Fibonacci %d, %.2f ms.\n", next, duration);
    }
}

int main()
{
    std::mutex mtx;
    mtx.lock();

    std::thread threadOne(printSeriesOfPrimeNumbers, 100), threadTwo(printFibunacciNumbers, 20);
    threadOne.join();
    threadTwo.join();

    mtx.unlock();

    return 0;
}

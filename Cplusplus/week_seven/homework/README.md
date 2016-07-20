# Homework 7

1. Write a program that calculates prime numbers and numbers of Fibunacci on different threads.

a. The first thread starts searching for prime number from 1, until killing of the program and when a prime number is found the program must present the time for finding this number.

b. The second thread is calculating and printing numbers of Fibunacci from 1 until killing of the program. When a new number of Fibunacci is found the program prints this number and the time for calculating this number.

c. The time is shown in ms (milliseconds)

d. Think about strategies for not having overlapping messages from the console.

e. The program must work with large as possible numbers. When the number is too large to be held in type like unsigned long long the program stops the calculation of that kind of numbers and shows error message.

Example output:

    Prime 1, 0.1 ms.
    Fibunacci 1, 0.1 ms.
    Prime 2, 0.1 ms.
    Fibunacci 2, 0.1 ms.
    Prime 3, 0.1 ms.
    Fibunacci 3, 0.1 ms.
    Fibunacci 5, 0.1 ms.
    Prime 5, 0.1 ms.
    Fibunacci 8, 0.1 ms.
    Prime 7, 0.1 ms.
    Fibunacci 13, 0.2 ms.
    Fibbunaci 21, 0.1 ms.
    Prime 11, 0.2 ms. 

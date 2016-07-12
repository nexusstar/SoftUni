#include <iostream>
#include <string>

const int MENUITEMS = 4;

std::string menu[MENUITEMS] =
{
  "0: Exit",
  "1: Show items",
  "2: Add item",
  "3: Remove item"
};

void printMenu()
{
  for (int i = 0; i < MENUITEMS; ++i)
  {
    std::cout << menu[i] << std::endl;
  }
}

// int operation functions

void print(int i)
{
  std::cout << i << " ";
}

bool odd(int i)
{
  return i%2;
}

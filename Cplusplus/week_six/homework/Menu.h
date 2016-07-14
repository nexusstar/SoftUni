#include <iostream>

int GetInput()
{
  int choise;
  std::cin >> choise;
  std::cin.ignore();
  return choise;
}

void DisplayMainMenu()
{
  std::cout << "+++ Main menu +++\n";
  std::cout << "1. Exit\n";
  std::cout << "2. Get data for voters\n";
  std::cout << "3. Enter vote data\n";
  std::cout << "Selection: ";
}

void DisplayAdminMenu()
{
  std::cout << "+++ Admin menu +++\n";
  std::cout << "1. Exit\n";
  std::cout << "2. Results based on age.\n";
  std::cout << "3. Results based on name\n";
  std::cout << "Selection: ";
}

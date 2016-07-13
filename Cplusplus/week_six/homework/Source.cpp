#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include "Utils.h"
#include "Voter.h"


int main()
{
  std::vector<Voter*> brexit;

  //start program
  printMenu();
  int i;
  std::string enteredPassword;
  while(!(std::cin >> i) ||  i < 0 || i > 2 ) //0: exit 1: get data 2: vote
  {
    std::cout << "Bad input, please try again: ";
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
  }
  std::cin.ignore();
  switch(i)
  {
    case 0:
      std::cout << "Exiting ...";
      break;
    case 1: // Admin
      std::cout << "Enter password: ";
      std::getline(std::cin, enteredPassword);
      if(correct_psw(enteredPassword))
      {
        std::cout << "/***** Collector logged *****/\n";
        printAdminMenu();
      }
      break;
    case 2: // Vote
      for(int i = 0; i < 3; ++i)
      {
        brexit.push_back(referendum());
      }
      break;
  }

  return 0;
}

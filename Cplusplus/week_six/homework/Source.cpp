#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include "Utils.h"
#include "Voter.h"


int main()
{
  std::vector<Voter*> brexit;

  int i = -1;
  std::string enteredPassword;

  //start program
  do{ //0: exit; 1: get data; 2: vote
    printMenu();
    std::cin >> i;
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
          do{
            printAdminMenu();
            collectorData(i, brexit);
          } while (!(std::cin >> i) || i != 0 || i > 2 );
        }
        break;
      case 2: // Vote
        for(int i = 0; i < 3; ++i)
        {
          brexit.push_back(referendum());
        }
        break;
    }
  } while (!(std::cin >> i) || i < 0 || i > 2);

  return 0;
}

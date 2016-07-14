#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include "Utils.h"
#include "Menu.h"
#include "Voter.h"


int main()
{
  std::vector<Voter*> brexit;

  int i;
  std::string enteredPassword;
  bool running = true;

  while(running)
  {
    DisplayMainMenu();
    i = GetInput();
    switch(i)
    {
      case 1:
        std::cout << "Sorry to see you leave..";
        running = false;
        break;
      case 2:
        std::cout << "Enter password: ";
        getline(std::cin, enteredPassword);
        if(correct_psw(enteredPassword))
        {
          bool adminRunning = true;
          std::cout << "+++Welcome collector+++\n";
          while(adminRunning)
          {
            DisplayAdminMenu();
            i = GetInput();
            switch(i)
            {
              case 1:
                std::cout << "Bay collector..\n";
                adminRunning = false;
                break;
              case 2:
                std::cout << "/----By age----/";
                break;
              case 3:
                std::cout << "/----By name---/";
                break;
            }
          } //.while admin menu
        } //.if psw correct
        std::cout << "Exit to main menu\n\n";
        break;
      case 3:
        std::cout << "+++ Welcome voters +++\n";
        std::cout << "Enter how many voters: ";
        i = GetInput();
        for(int v = 0; v < i; v++){
          brexit.push_back(referendum());
        }
        break;
      default:
        std::cout << "ERROR: This text should not appear";
    }
  } //.while

  return 0;
}

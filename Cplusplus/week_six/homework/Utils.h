#include <iostream>
#include <string>
#include "Voter.h"

const std::string COLLECTOR_PSW = "12344321";

bool correct_psw(std::string psw){
  return psw == COLLECTOR_PSW;
}

Voter* referendum()
{
  std::string name;
  int age;
  std::string gender;
  std::string living;
  std::string ethos;
  Vote userVote;

  std::cout << "Please make your vote: " << std::endl;

  std::cout << "Enter your name: ";
  getline(std::cin, name);

  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cin.ignore(); // remove last \n from stream

  std::cout << "Enter where you live: ";
  getline(std::cin, living);

  std::cout << "Enter your ethos: ";
  getline(std::cin, ethos);

  std::cout << "What is your vote:\n";
  std::cout << "0: Stay\n";
  std::cout << "1: Leave\n";
  int i = -1;
  std::cin >> i;
  switch(i)
  {
    case 0:
      userVote = Vote::Stay;
      break;
    case 1:
      userVote = Vote::Leave;
      break;
    default:
      std::cout << "Invalid choise your vote will be counted as Leave\n";
      userVote = Vote::Leave;
  }
  std::cin.ignore(); // clear last \n from stream

  return new Voter(name, age, living, ethos, userVote);
}

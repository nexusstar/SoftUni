#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <algorithm>
#include "Voter.h"

const std::string COLLECTOR_PSW = "12344321";

bool correct_psw(std::string psw){
  return psw == COLLECTOR_PSW;
}

Voter* referendum()
{
  std::string name;
  int age;
  Gender userSex;
  std::string living;
  std::string ethos;
  Vote userVote;

  std::cout << "/***** Brexit *****/\n";
  std::cout << "Please make your vote: " << std::endl;

  std::cout << "Enter your age: ";
  while(!(std::cin >> age) || age < 0)
  {
    std::cout << "Bad input, please try again: ";
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
  }
  std::cin.ignore(); // remove last \n from stream

  std::cout << "Enter your name: ";
  getline(std::cin, name);

  std::cout << "Chose your gender:\n";
  std::cout << "0: Male\n1: Female\n2: Other\n";
  int s;
  while(!(std::cin >> s) ||  s < 0 || s > 2 )
  {
    std::cout << "Bad input, please try again: ";
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
  }
  switch(s)
  {
    case 0:
      userSex = Gender::Male;
      break;
    case 1:
      userSex = Gender::Female;
      break;
    case 2:
      userSex = Gender::Other;
    default:
      std::cout << "Something went wrong, your Sex will be counted as Other\n";
      userSex = Gender::Other;
  }
  std::cin.ignore(); // clear last \n from stream

  std::cout << "Enter where you live: ";
  getline(std::cin, living);

  std::cout << "Enter your ethos: ";
  getline(std::cin, ethos);

  std::cout << "What is your vote:\n";
  std::cout << "0: Stay\n";
  std::cout << "1: Leave\n";
  int i;
  while(!(std::cin >> i) ||  i < 0 || i > 1 )
  {
    std::cout << "Bad input, please try again: ";
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
  }
  switch(i)
  {
    case 0:
      userVote = Vote::Stay;
      break;
    case 1:
      userVote = Vote::Leave;
      break;
    default:
      std::cout << "Something went wrong, your vote will be counted as Leave\n";
      userVote = Vote::Leave;
  }
  std::cin.ignore(); // clear last \n from stream

  return new Voter( age, name, userSex, living, ethos, userVote);
}



void collectorData(int i, std::vector<Voter*> voters ){
  int totalVoters;
  int totalForLeave;
  int totalForStay;
  std::cout << i;

  std::for_each(voters.begin(), voters.end(), [&](Voter *v){
      ++totalVoters;
      if (v -> Opinion() == Vote::Stay)
      {
      ++totalForStay;
      }else{
      ++totalForLeave;
      }
      }); //labda end
  std::cout << "Total voters: " << totalVoters << std::endl;
  std::cout << "For stay: " << totalForStay << std::endl;
  std::cout << "For leave: " << totalForLeave << std::endl;
}

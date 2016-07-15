#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "Voter.h"

void TotalVotersData( std::vector<Voter*> voters ){
  int totalVoters = 0;
  int totalForLeave = 0;
  int totalForStay = 0;
  float totalForLeavePercent;
  float totalForStayPercent;

  std::for_each(voters.begin(), voters.end(), [&](Voter *v){
      ++totalVoters;
      if (v -> Opinion() == Vote::Stay)
      {
      ++totalForStay;
      }else{
      ++totalForLeave;
      }
      }); //labda end

  totalForLeavePercent = ((float)totalForStay / (float)totalVoters) * 100;
  totalForStayPercent = ((float)totalForLeave / (float)totalVoters) * 100;;

  std::cout << "Total voters: " << totalVoters << std::endl;
  std::cout << "For stay: " << totalForStay << " /";
  std::cout << std::fixed;
  std::cout << std::setprecision(2);
  std::cout << totalForStayPercent << "%" << std::endl;
  std::cout << "For leave: " << totalForLeave << " /";
  std::cout << totalForLeavePercent << "%" << std::endl;
}

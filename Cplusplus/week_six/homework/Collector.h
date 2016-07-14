#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <algorithm>
#include "Voter.h"

void TotalVotersData( std::vector<Voter*> voters ){
  int totalVoters;
  int totalForLeave;
  int totalForStay;

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

#include <iostream>
#include <vector>
#include "Utils.h"
#include "Voter.h"


int main()
{
  std::vector<Voter*> brexit;

  for(int i = 0; i < 3; ++i)
  {
    brexit.push_back(referendum());
  }

  return 0;
}

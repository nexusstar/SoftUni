// Voter.h - Voters member declaration
#ifndef __VOTER_H_
#define __VOTER_H_
#include <string>
#include "Vote.h"

class Voter
{
  private:
    std::string _name;
    int _age;
    std::string _living;
    std::string _ethos;
    Vote _vote;
  public:
    int Age() { return _age; }
    std::string Name(){ return _name; }
    std::string Living(){ return _living; }
    Vote Opinion(){ return _vote; }
    Voter(
        std::string vName,
        int vAge,
        std::string vLiving,
        std::string vEthos,
        Vote vVote
        );
    ~Voter();
};
#endif

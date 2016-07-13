// Voter.h - Voters member declaration
#ifndef __VOTER_H_
#define __VOTER_H_
#include <string>
#include "Vote.h"
#include "Gender.h"

class Voter
{
  private:
    int _age;
    std::string _name;
    Gender _gender;
    std::string _living;
    std::string _ethos;
    Vote _vote;
  public:
    int Age() { return _age; }
    std::string Name(){ return _name; }
    std::string Living(){ return _living; }
    Vote Opinion(){ return _vote; }
    Gender Sex(){ return _gender; }
    Voter(
        int vAge,
        std::string vName,
        Gender vSex,
        std::string vLiving,
        std::string vEthos,
        Vote vVote
        );
    ~Voter();
};
#endif

#ifndef __VOTER_H_
#define __VOTER_H_

#include "Choise.h"

class Elector()
{
  private:
    int _age;
    std::string _name;
    std::string _living;
    std::string _ethos;
    Vote _vote;
  public:
    int Age() { return _age; }
    string Name(){ return _name; }
    string Living(){ return _living; }
    Vote Opinion(){ return _vote; }
    Elector( std::string vName, int vAge, std::string vLiving, std::string vEthos, Vote vVote);
    ~Elector();
};
#endif

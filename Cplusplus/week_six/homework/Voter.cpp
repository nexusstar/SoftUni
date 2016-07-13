// Voter.cpp - Voters member implementation

#include "Voter.h"

Voter::Voter(  int vAge, std::string vName, Gender vSex, std::string vLiving, std::string vEthos, Vote vVote):
  _age(vAge)
  , _name(vName)
  , _gender(vSex)
  , _living(vLiving)
  , _ethos(vEthos)
  , _vote(vVote)
{}

Voter::~Voter()
{}

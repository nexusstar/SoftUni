// Voter.cpp - Voters member implementation

#include "Voter.h"

Voter::Voter( std::string vName, int vAge, std::string vLiving, std::string vEthos, Vote vVote):
  _name(vName)
  , _age(vAge)
  , _living(vLiving)
  , _ethos(vEthos)
  , _vote(vVote)
{}

Voter::~Voter()
{}

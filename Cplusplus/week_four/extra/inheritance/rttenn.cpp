#include "rttenn.h"

RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht) : TableTennisPlayer (fn, ln, ht), rating(r){}

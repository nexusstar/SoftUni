//rttenn.h -- Rated player derived class of table tennis player
#include "ttenn.h"

class RatedPlayer : public TableTennisPlayer
{
  private:
    unsigned int rating;
  public:
    RatedPlayer( unsigned int r = 0, const string &fn ="none", const string &ln="none", bool ht = false );
    RatedPlayer( unsigned int r, const TableTennisPlayer &tp );
    unsigned int Rating() const { return rating; }
    void ResetRating (unsigned int r){ rating = r; }


};

#include <iostream>
#include "rttenn.h"

int main( void )
{
  using std::cout;
  TableTennisPlayer playerOne("Nexus", "Star", true);
  TableTennisPlayer playerTwo("Soll", "Nebula", false);

  playerOne.Name();
  if (playerOne.HasTable())
    cout << ": has a table. \n";
  else
    cout << ": hasn't a table. \n";

  playerTwo.Name();
  if (playerTwo.HasTable())
    cout << ": has a table. \n";
  else
    cout << ": hasn't a table. \n";

  return 0;
}

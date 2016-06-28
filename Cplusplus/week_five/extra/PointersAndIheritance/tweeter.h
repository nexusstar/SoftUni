#ifndef _TWEETER_H_
#define _TWEETER_H_
#include "person.h"
#include <string>

class Tweeter :
  public Person
{
  public:
    Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
    ~Tweeter();
    std::string getName() const;
  private:
    std::string twitterhandle;
};
#endif

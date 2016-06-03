#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle):
  Person(first, last, arbitrary), twitterhandle(handle)
{

  std::cout << "Constructing Tweeter: " << twitterhandle << std::endl;
}

Tweeter::~Tweeter(void)
{
  std::cout << "Destructing Tweeter: " << twitterhandle << std::endl;
}

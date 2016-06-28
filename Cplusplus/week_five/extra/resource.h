#ifndef RESOURCE_H_
#define RESOURCE_H_

#include <string>

class Resource
{
  public:
    Resource(std::string n);
    ~Resource(void);
    std::string getName() const { return name; }
  private:
    std::string name;
};
#endif

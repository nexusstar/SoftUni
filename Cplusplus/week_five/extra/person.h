#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include "resource.h"

class Person
{

  public:
    Person(std::string first, std::string last, int arbitrary);
    Person(const Person& p); //copy constructor
    ~Person();
    std::string getName() const;
    int getNumber() const { return arbitrarynumber; }
    void AddResource();


  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
    Resource* pResource;

};
#endif

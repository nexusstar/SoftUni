#include <string>
#ifndef _Person_H
#define _Person_H

class Person
{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
  public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
    std::string GetName() const; //declare that does not change anything need to change and in .cpp file
    int GetNumber() const {return arbitrarynumber;};
    void SetNumber(int number){arbitrarynumber = number;};
    bool operator<(const Person& p) const; //take const-ref and does not change any member variable of it's class
    bool operator<(int i) const; //does not change any member variable
    friend bool operator<(int i, const Person& p);

};
bool operator<(int i, const Person& p);
#endif

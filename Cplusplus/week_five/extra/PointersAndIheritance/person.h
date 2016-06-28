#include <string>
#ifndef _PERSON_H_
#define _PERSON_H_
class Person
{
  public:
    Person(std::string first, std::string last, int arbitrary);
    virtual ~Person();
    virtual std::string getName() const;
    int getNumber() const { return arbitrarynumber; }
    void setNumber(int number) { arbitrarynumber = number; }
    void setFirstName( std::string first) { firstname = first; }

  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

};
#endif

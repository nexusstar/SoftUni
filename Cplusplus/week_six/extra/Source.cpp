#include <iostream>
#include <map>
#include <utility>

class Person
{
  public:
    Person( std::string first, std::string last, int arbitray);
    ~Person();
    int getNum();
    std::string getName();
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
};

Person::Person(std::string first, std::string last, int arbitrary):
  firstname(first),lastname(last),arbitrarynumber(arbitrary)
{}
Person::~Person()
{}

int Person::getNum()
{
  return arbitrarynumber;
}

std::string Person::getName()
{
  return firstname + " " + lastname;
}

int main ()
{
  Person Kate( "Kate","Gregory", 123 );
  Person Nexus( "Nexus","StarA", 124 );
  Person SomeA( "Nexus", "Star", 125 );

  std::map<int, Person> people;

  std::pair<int, Person> p (SomeA.getNum(), SomeA);
  people.insert(p);

  return 0;

}

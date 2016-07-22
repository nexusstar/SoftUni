#include <iostream>
#include <exception>
#include <string>

using namespace std;

class Person
{
  private:
    string first;
    string last;
    int arbitrarynumber;
  public:
    int getNumber(){ return arbitrarynumber; }
    std::string getName(){ return first + " " + last; }
    Person(string firstName, string lastName, int arbitray);
    Person();
    ~Person();
};


Person::Person():first(""),last(""),arbitrarynumber(0){}

Person::Person(string firstName, string lastName, int arbitrary):
  first(firstName),last(lastName),arbitrarynumber(arbitrary)
{
  if(arbitrarynumber == 0){
    throw invalid_argument("ERROR: Arbitrary number for a Person can not be zero");
  }
}

Person::~Person()
{
}

int main()
{

  try{
    Person Kate("Kate", "Gregory", 0);
  }
  catch (exception& e)
  {
    cout << e.what();
  }

  return 0;
}

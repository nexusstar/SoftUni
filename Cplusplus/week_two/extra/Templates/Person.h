#include <string>

using namespace std;
class Person
{
  private:
    string firstName;
    string lastName;
    int arbitraryNumber;
  public:
    Person(string first, string last, int arbitrary);
    ~Person();
};

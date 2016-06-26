#include <cstring>
#include "stringbad.h"

using std::cout;

int StringBad::num_strings = 0; // init static class member

//construct StringBad from cstring
StringBad::StringBad(const char *s)
{
  len = std::strlen(s); //set size
  str = new char[len + 1];
  std::strcpy(str, s); //initialize the pointer
  num_strings++; //set object count

  cout << num_strings << ": \"" << str << "\"object created\n";
}

StringBad::StringBad()
{
  len = 4;
  str = new char[len];
  std::strcpy(str, "C++");
  num_strings++;

  cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
  cout << "\"" << "\"object deleted, ";

  num_strings--;

  cout << num_strings << " left \n";

  delete [] str;
}

std:: ostream &operator<<(std::ostream &os, const StringBad &st)
{
  os << st.str;
  return os;
}

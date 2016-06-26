#include <iostream>
#ifndef STRINGB_H_
#define STRINGB_H_
class StringBad
{

  private:
    char *str; //pointer to string
    int len;   //string length
    static int num_strings; //number of objects
  public:
    StringBad(const char *c); //constructor
    StringBad();    //default constructor
    ~StringBad();   //destructor
    friend std::ostream &operator<<(std::ostream & os, const StringBad &st);
};
#endif

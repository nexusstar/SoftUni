#include <iostream>
#include <string>

const std::string COLLECTOR_PSW = "12344321";

bool correct_psw(std::string psw){
  return psw == COLLECTOR_PSW;
}



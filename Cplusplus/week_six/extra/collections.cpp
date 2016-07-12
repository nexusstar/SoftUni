#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#include "Utils.h"


int main()
{

  std::vector<int> v;
  v.push_back(3);
  v.push_back(6);
  v.push_back(9);
  v.push_back(2);

  std::cout << "contents of v: ";
  std::for_each(v.begin(), v.end(), print);

  std::cout << "odd elements of v: ";
  auto o = find_if(v.begin(), v.end(), odd);
  while (o != v.end())
  {
    std::cout << *o << " ";
    o = find_if(++o, v.end(), odd);
  }

  std::cout << "contents of v: ";
  std::sort(v.begin(), v.end());
  std::for_each(v.begin(),v.end(), print);


  return 0;
}

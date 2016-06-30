#include <iostream>
#include <vector>


int main()
{
  std::vector<int> v;
  v.push_back(3);
  v.push_back(4);
  v.push_back(10);

  for(auto i = v.begin(); i != v.end(); i++)
  {
    std::cout << *i << " ";
  }
  std::cout << std::endl;

  for(auto i = v.rbegin(); i != v.rend(); i++)
  {
    std::cout << *i << " ";
  }
  std::cout << std::endl;

  return 0;
}

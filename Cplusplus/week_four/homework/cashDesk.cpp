#include <iostream>
#include <vector>
#include "itemSKU.h"

int main()
{
  using std::string;
  using std::vector;
  using std::cout;
  using std::endl;

  string sku;
  sku = "SUI0101010";
  string sku01;
  sku = "SUI0201010";
  string sku02;
  sku = "SUI03010101";

  vector<string> cashDesk;
  cashDesk.push_back(sku);
  cashDesk.push_back(sku01);
  cashDesk.push_back(sku02);


  cout << (int) cashDesk.size() << endl;
  cout << (int) cashDesk.capacity() << endl;
  cout << (int) cashDesk.max_size() << endl;

  ItemSKU aSKU;
  ItemSKU bSKU{"012030"};



  return 0;
}

//itemSKU.cpp -- sku class methods
//
#include <cstring>
#include "itemSKU.h"
using std::strcpy;
using std::cout;

//initialize static class member
int ItemSKU::num_skus = 0;

//class methods

//constructor
ItemSKU::ItemSKU(const char * sku)
{
  len = std::strlen(sku); // set size
  str = new char[len + 1];    // allocate storage ! +1 strlen does not count terminating null character
  std::strcpy(str, sku);  // initialize pointer
  num_skus++;             // SKU count

  cout << num_skus << ": \"" << str << "\" sku object created\n";

}

ItemSKU::ItemSKU()
{
  len = 10;
  str = new char[10];
  strcpy(str, "SUI0000000");
  num_skus++;

  cout << num_skus << ": \"" << str << "\" sku default object created\n";
}

ItemSKU::~ItemSKU()
{
  cout <<  "\"" << str << "\" sku object deleted\n";
  --num_skus;
  cout << num_skus << " left \n";
  delete [] str;
}

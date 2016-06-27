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

// copy constructor it's needed because some class members are
// new-initialized pointers to data rather than the data
ItemSKU::ItemSKU(const ItemSKU & aSKU)
{
  num_skus++;
  len = aSKU.len;
  str = new char [ len + 1 ];
  strcpy(str, aSKU.str); //copy string to new location
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

// Default assignment leads to problem when assign one object to another existing object
// Try to comment this and declaration in .h file and see how it does not free previously
// created str.
ItemSKU & ItemSKU::operator=(const ItemSKU & sku)
{
  if(this == &sku) //object assigned to itself
    return *this; //return it
  delete [] str; //free old str
  len = sku.len;
  str = new char[len + 1 ];
  strcpy(str, sku.str);
  return *this;
}

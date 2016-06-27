//itemSKU.h - sku (stock keeping unit) class definition
//
#include <iostream>
#ifndef SKU_H_
#define SKU_H_

class ItemSKU
{
  private: 
    char * str;          // pointer to sku string
    int len;             // lenght of sku string;
    static int num_skus; // number of sku objects dummy inventories count
  public:
    ItemSKU(const char * sku); // constructor
    ItemSKU();                 // default constructor
    ~ItemSKU();                // destructor;
};
#endif
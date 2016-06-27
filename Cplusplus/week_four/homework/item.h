#include "itemSKU.h"
#ifndef ITEM_H_
#define ITEM_H_
class Item
{
  public:
    ItemSKU sku(){ return _sku; }
    float value(){ return _value;}
    std::string name(){ return _name; }
    void setValue(float newValue);
    void setSKU(); // using default SKU
    void setSKU(const char * newSKU);
    void setName(std::string newName);
    // constructors
    Item(const char * newSKU, std::string aName, float value);
    Item(ItemSKU aSKU, std::string aName, float aValue);
    Item(std::string aName, float aValue);
    ~Item();
  private:
    float _value;
    ItemSKU _sku;
    std::string _name;
};
#endif

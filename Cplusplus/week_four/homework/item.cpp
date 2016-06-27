//item.cpp - item class methods
//
#include "item.h"

void Item::setValue(float newValue)
{
  _value = newValue;
}

void Item::setSKU(){
  ItemSKU aSKU; // initialize with sku default constructor
  _sku = aSKU;
}

void Item::setSKU(const char * newSKU)
{
  ItemSKU aSKU{newSKU}; //-std=c++11 initialization style
  _sku = aSKU;
}

void Item::setName(std::string newName)
{
  _name = newName;
}

//constructor
Item::Item(const char * newSKU, std::string aName, float aValue)
{
  setSKU(newSKU);
  setName(aName);
  setValue(aValue);
}

Item::Item(ItemSKU aSKU, std::string aName, float aValue)
{
  _sku = aSKU; //pass object by value it makes shallow copy
  setName(aName);
  setValue(aValue);
}

Item::Item(std::string aName, float aValue)
{
  setSKU(); //set sku to default
  //using setters
  setName(aName);
  setValue(aValue);
}
Item::~Item()
{

}

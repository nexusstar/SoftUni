#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "item.h"

class Inventory {
public:
    Inventory();
    ~Inventory();
    void addItem(Item* item);
    Item* getItemByCode(std::string code);
    void updateItemPrice(std::string code, float value);
private:
    std::vector<Item*> items;
};

#endif

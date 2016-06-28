#include "inventory.h"
#include <iostream>
Inventory::Inventory() {
}

Inventory::~Inventory(){
    for(Item* item : items){
        delete item;
    }
}

void Inventory::addItem(Item* item){
    items.push_back(item);
}

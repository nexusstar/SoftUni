#include <iostream>
#include <vector>
#include <istream>
#include "item.h"
using namespace std;
int main()
{

  Item iOne{"1234567890", "Item One", 2.40};
  Item iTwo{"Item Two", 2.0};
  vector<Item> cashDesk;
  cashDesk.push_back(iOne);
  cashDesk.push_back(iTwo);

  cout << (int) cashDesk.size() << endl;
  cout << (int) cashDesk.capacity() << endl;
  cout << (int) cashDesk.max_size() << endl;

  char input = 0;
  float total = 0;
  float amount = 0;
  float change = 0;

  while(input != '4'){
    cout << "Menu: " << endl;
    cout << "1. Use cash register" << endl;
    cout << "2. Update item price" << endl;
    cout << "3. Display last purchase" << endl;
    cout << "4. Exit" << endl;
    cin >> input;
    if(input == '1'){
      cout << "CASH DESK OPERATIONAL" << endl;
      string input = "";
    }else if(input == '2'){
      cout << "Enter code: ";
      string code;
      cin >> code;
      cout << "Enter new price: ";
      float value;
      cin >> value;
      // TODO: update item with value
    }else if(input == '3'){
      cout << "CandyShop" << endl;
      cout << "BIC:12345678" << endl;
      cout << "Address: Somewhere in the middle of nowhere" << endl;
      cout << "Purchases: " << total << " BGN" << endl;
      cout << "Given: " << amount << " BGN" << endl;
      cout << "Change: " << change <<" BGN" << endl;
    }
  }

  return 0;
}

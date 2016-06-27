#include <iostream>
#include <vector>
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

  ItemSKU aSKU;
  ItemSKU bSKU{"012030"};

  float readFloat(istream& stream);
  int readInt(istream& stream);
  string readLine(istream& stream);

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
    input = readLine(cin)[0];
    if(input == '1'){
      cout << "CASH DESK OPERATIONAL" << endl;
      string input = "";
      while(input[0] != 'G'){
        input = readLine(cin);
        switch(input[0]){
          case 'C':
            total = 0;
            cout << "TOTAL: " << total << endl;
            break;
          case 'T':
            cout << "TOTAL: " << total << endl;
            break;
          case 'G':
            cout << "PLEASE ENTER THE AMOUNT OF MONEY: ";
            amount = readFloat(cin);
            change = amount - total;
            cout << "CHANGE: " << change << endl;
            break;
        }
        if(input[0] == 'E'){
          // Copy constructor called here
          Item copyItem = *inventory.getItemByCode(readLine(cin));
          cout << copyItem.GetName() << endl;
          cout << copyItem.GetPrice()->GetValue() << endl;
          total += copyItem.GetPrice()->GetValue();
        }
      }
    }else if(input == '2'){
      cout << "Enter code: ";
      string code = readLine(cin);
      cout << "Enter new price: ";
      float value = readFloat(cin);
      inventory.updateItemPrice(code, value);
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

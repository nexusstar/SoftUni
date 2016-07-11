#include <iostream>
#include <list>

#include "Utils.h"

using namespace std;
int main()
{

  list<string> toDoList;
  int myint; //use to take care of input when 0 is entered it exits
  string s;
  int i;
  list<string>::iterator it;

  cout << "Please enter some ToDo (enter 0 to end):\n";

  do {
    cout << "Chose what you want to do:\n";
    printMenu();
    cin >> myint;
    cin.ignore(); //clear left behind \n character
    switch (myint) {
      case 0: cout << "Exiting  ...";
              break;
      case 1: cout << "Existing items: \n";
              for (i = 0, it = toDoList.begin(); it != toDoList.end(); ++it) {
                cout << i << ": " << *it << endl;
                i++;
              }
              i = 0;
              break;
      case 2: cout << "Add to list: ";
              cin.clear(); //clear the stream so to use getline
              getline(cin, s);
              toDoList.push_back(s);
              break;
      case 3: cout << "Remove from items: ";
              cin >> myint;
              if (toDoList.size() > myint)
              {
                list<string>::iterator currentIT = toDoList.begin();
                advance(currentIT, myint);
                toDoList.erase(currentIT);
              }
              myint = 1; //if we delete item 0 the program exits switch to for maybe
              cout << "Item removed \n";
              printMenu();
              break;
    } //.switch
  } while (myint);
  return 0;
}

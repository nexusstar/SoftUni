// inserting items in list
// single element (1)	iterator insert (const_iterator position, const value_type& val);
// fill (2)	iterator insert (const_iterator position, size_type n, const value_type& val);
// range (3)	template <class InputIterator>iterator insert (const_iterator position, InputIterator first, InputIterator last);
// move (4)	iterator insert (const_iterator position, value_type&& val);
// initializer list (5)	iterator insert (const_iterator position, initializer_list<value_type> il);

#include<iostream>
#include<list>

void  printListItems( std::list<int>& aList )
{
  std::list<int>::iterator it;
  for ( it = aList.begin(); it != aList.end(); ++it) {
    std::cout <<" " << *it;
  }
  std::cout <<  "\n";
}

int main()
{

  std::list<int> myList;
  std::list<int>::iterator it;

  for (int i=0; i < 5; ++i) myList.push_back(1 << i); //1 2 4 8 16


  it = myList.begin();
  ++it; //it points to 2
  printListItems(myList);
  std::cout << *it << std::endl; //FYI


  myList.insert(it, 10);
  printListItems(myList);
  std::cout << *it << std::endl; //FYI it still points to 2

  myList.insert(it, 2, 20);
  printListItems(myList);
  std::cout << *it << std::endl; //FYI it still points to 2
  --it;
  std::cout << *it << std::endl; //FYI it now points to 20

  myList.insert(it, -2); //insert at iterator position 20
  printListItems(myList);
  std::cout << *it << std::endl; //FYI it still points to 20

  myList.insert(++it, -2); //insert at iterator position 2
  printListItems(myList);
  std::cout << *it << std::endl; //FYI now it points to 2 that was after 20



  return 0;
}

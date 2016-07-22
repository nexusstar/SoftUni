#include <iostream>
#include <vector>


using namespace std;

int main()
{
  try{
  vector<int> v;
  v.push_back(1);
  int j= v.at(99); //throwing an instance of 'std::out_of_range'
  }
  catch(out_of_range& e){
    cout << "out of range exception: "<< e.what();
  }
  catch (exception& e){
    cout << e.what();
  }

  return 0;
}

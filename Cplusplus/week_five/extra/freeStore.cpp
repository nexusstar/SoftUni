#include <iostream>
#include <string>
#include "resource.h"

using namespace std;

int main()
{
  {
    Resource localResource {"local"};
    string localString = localResource.getName();
  } // destructs the inner objects
  Resource* pResource = new Resource("created with new"); //created in heap ("free store"
  string newString = pResource -> getName();
  Resource* pResource2 = pResource; // point to pResource
  string string2 = pResource2 -> getName();
  delete pResource;
  string string3 = pResource -> getName();
  pResource = nullptr;
  delete pResource;
  delete pResource2;

  return 0;
}

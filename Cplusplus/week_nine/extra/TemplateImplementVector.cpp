#include <iostream>
#include <vector>

template <class T>
class container
{
  public:
    T values[10];
    container(T* newValues)
    {
      for (int i = 0; i < 10; ++i)
        values[i] = newValues[i];
    }
    T largesValue(){
      T valueToReturn = values[0];
      for( int i = 1; i < 10; ++i)
      {
        if(valueToReturn < values[i])
          valueToReturn = values[i];
      }
      return valueToReturn;
    }
};

int main()
{
  std::vector <int> aVector;
  int values[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  container <int> aContainer(values);

  return 0;
}

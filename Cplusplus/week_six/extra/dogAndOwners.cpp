#include <iostream>
#include <memory>

class Dog
{
  private:
    std::string name;
    std::string breed;
  public:
    std::string getName(){ return name; }
    std::string getBreed(){ return breed; }
};

class Person
{
  public:
    std::string name;
    std::shared_ptr<Dog> pDogPerson;
};

class Friend
{
  public:
    std::string name;
    std::weak_ptr<Dog> pDogFriend;
};

int main()
{
  std::unique_ptr<Person> aPerson(new Person());
  std::unique_ptr<Friend> aFriend(new Friend());

  aPerson->pDogPerson = std::shared_ptr<Dog>(new Dog());
  aFriend->pDogFriend = aPerson -> pDogPerson;
  aPerson->pDogPerson = nullptr;

return 0;
}

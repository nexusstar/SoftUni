#include <iostream>

class BankAccount
{
  public:
    float balance;
};

class Person
{
  public:
    BankAccount bankAccount;
};

class Man : private Person
{
  public:
    Man()
    {
      bankAccount.balance = 0;
    }
  friend class Women;
  friend void addMoneyToManCard(float amount, Man &aMan);
};
void addMoneyToManCard(float amount, Man &aMan)
{
  aMan.bankAccount.balance += amount;
}

class Women : private Person
{
  public:
    Women &operator=(Man &aMan)
    {
      this -> bankAccount.balance = aMan.bankAccount.balance;
      aMan.bankAccount.balance = 0;
      return *this; //must return something 
    }

    void wasteMoney()
    {
      this->bankAccount.balance = 0;
    };
};

int main()
{
  Man Pesho = Man();
  addMoneyToManCard(2000, Pesho);

  Women Stanka;
  Stanka = Pesho;
  Stanka.wasteMoney();

  return 0;
}

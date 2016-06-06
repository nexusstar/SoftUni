#include <iostream>

class BankAccount
{
  public:
    bool withdrow(float sum);
    void deposit(float sum);
  private:
    float currentBalance;
};

bool BankAccount::withdrow(float sum)
{
  if (currentBalance >= sum)
    currentBalance -= sum;
  else
    return false;
  return true;
}

void BankAccount::deposit(float sum)
{
  currentBalance += sum;
}

using namespace std;

int main()
{
  BankAccount myBankAccount;
  myBankAccount.deposit(1000);

  if (myBankAccount.withdrow(100))
  {
    cout << "Withdraw of 100 from account " << endl;
  }
  else
  {
    cout << "Not enough money! " << endl;
  }

}

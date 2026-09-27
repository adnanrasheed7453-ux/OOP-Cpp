#include <iostream>
using namespace std;

struct BankAccount
{
    string accountHolder;
    float balance;

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.accountHolder = "Adnan";
    account.balance = 10000;

    cout << "Account Holder: " << account.accountHolder << endl;
    cout << "Starting Balance: " << account.balance << endl;

    account.deposit(5000);
    account.deposit(3000);

    return 0;
}

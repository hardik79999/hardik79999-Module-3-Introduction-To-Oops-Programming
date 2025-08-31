#include <iostream>
using namespace std;

class BankAccount 
{
private:
    float balance;

public:
    BankAccount(float initialBalance) 
	{
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

 
    void deposit(float amount) 
	{
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

  
    void withdraw(float amount) 
	{
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid or insufficient amount!" << endl;
    }


    void showBalance() 
	{
        cout << "Current Balance: ?" << balance << endl;
    }
};

int main() {
    BankAccount account(5000); 

    account.showBalance();
    account.deposit(2000);
    account.showBalance();
    account.withdraw(1000);
    account.showBalance();

    return 0;
}


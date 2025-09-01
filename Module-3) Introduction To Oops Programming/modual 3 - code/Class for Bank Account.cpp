#include <iostream>
using namespace std;

// Class definition
class BankAccount 
{
private:
    int balance; // private data member

public:
    // Constructor to initialize balance
    BankAccount() 
	{
        balance = 0;
    }

    // Function to deposit money
    void deposit(int amount) 
	{
        if (amount > 0) 
		{
            balance = balance  + amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(int amount) 
	{
        if (amount <= 0) 
		{
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount > balance) 
		{
            cout << "Insufficient balance!" << endl;
        } else {
            balance = balance -  amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Function to display current balance
    void showBalance() 
	{
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount account; // Create object

    int choice, amount;

    do {
        // Menu
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.showBalance();
                break;

            case 4:
                cout << "Thank you for using the bank system!" << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } 
	while (choice != 4);

    return 0;
}



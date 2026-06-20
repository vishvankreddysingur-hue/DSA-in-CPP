#include <iostream>
using namespace std;

// Class demonstrating encapsulation
class BankAccount {
private:
    double balance;   // hidden data

public:
    // Constructor
    BankAccount(double b) {
        balance = b;
    }

    // Getter method
    double getBalance() {
        return balance;
    }

    // Setter method (controlled access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount" << endl;
        }
    }
};

int main() {
    BankAccount account(1000);

    cout << "Initial Balance: " << account.getBalance() << endl;

    account.deposit(500);
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(300);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    return 0;
}

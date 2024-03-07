/*
*Name: Arwa Feroze
*ID: 23k-0022
*LAB 5 Q4 
*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accountNumber, string accountHolderName, double balance){
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }
      
    // Member functions
    void deposit(double amount) {
        balance += amount;
          cout << "Deposit of " << amount << " rupees successful." << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " rupees successful." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << " rupees" << endl;
    }

    void displayTransaction(){
             cout << "Balance after transaction: " << balance << " rupees" << endl;
    }

   int GetAccNum(){
        return accountNumber;
    }
};

int main() {
    // Create an array of BankAccount objects
    BankAccount accounts[3] = {
        BankAccount(1001, "Faraz Ahmad", 0.0),
        BankAccount(1002, "Hafsa Nayab", 7000.0),
        BankAccount(1003, "Shadab Khan", 3000.0)
    };

    // Display initial account details
    for (int i = 0; i < 3; ++i) {

        cout << "Initial Account Details:" << endl;
        accounts[i].display();
        cout << endl;
        cout << "Transaction details for account number " << accounts[i].GetAccNum() << ":" << endl;
        accounts[i].deposit(0.0);
        accounts[i].displayTransaction();
        cout << endl;
        accounts[i].withdraw(500);
        accounts[i].displayTransaction();
        cout<< "-------------------------------------" << endl;
    }

    return 0;
}

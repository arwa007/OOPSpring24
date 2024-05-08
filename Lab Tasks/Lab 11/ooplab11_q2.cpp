/*
Name: Arwa Feroze
ID: 23k-0022
Lab 11 Q2
*/
#include <iostream>
using namespace std;

class account{
    protected:
    int number;
    double balance;

    public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual double calculateInterest() = 0;
    int getAccountNumber() { return number; }
    double getBalance() { return balance; }
};

class savings : public account {

    protected:
    double rate;

    public:
    void deposit(double amount) override { balance += amount; }
    void withdraw(double amount) override {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient funds" << endl;
    }
    double calculateInterest() override {return rate*balance;}

};

class current : public account {

    protected:
    double limit;

    public:
    void deposit(double amount) override { balance += amount; }
    void withdraw(double amount) override {
        if (balance + limit >= amount)
            balance -= amount;
        else
            cout << "Exceeds overdraft limit" << endl;
            }
    double calculateInterest() override {return 0;}

};
/*
Name: Arwa Feroze
ID: 23k-0022
Lab 5 Task 2
*/
#include <iostream>
using namespace std;

class loanHelper{

const float rate;
float amountTaken;
int months;

public:
loanHelper(float rate, float amountTaken, int months) : rate(rate), amountTaken(amountTaken), months(months){}

void calculatePayment(){

    cout<<"You have to pay $"<<amountTaken/months+(amountTaken/months)*rate<<" every month for "<<months<<" months to repay your loan."<<endl;
}
};

int main(){

    cout<<"Loan 1:"<<endl;
    loanHelper loan1(0.1, 500, 2);
    loan1.calculatePayment();    

    cout<<"Loan 2:"<<endl;
    loanHelper loan2(0.45, 10000, 24);
    loan2.calculatePayment();    
}
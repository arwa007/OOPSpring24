/*
Name: Arwa Feroze
ID: 23k-0022
Lab 6 Task 1
*/

#include <iostream>
#include <string>
using namespace std;

class bankAccount{
   int accID;
   double balance;
   string *transHis;
   int trans;

     public:
     //parametric constructor
   bankAccount(int ID, double balance, string transactions[], int trans) : accID(ID), balance(balance), trans(trans){

        transHis = new string[trans];
        for (int i=0; i<trans; ++i )
            transHis[i] = transactions[i];
   }

    //copy constructor
   bankAccount(bankAccount& acc){
        
     accID = acc.accID;
     balance = acc.balance; 
     trans = acc.trans; 

     transHis = new string[trans]; // Allocate memory for transHis array
     for (int i=0; i<trans; ++i )
            transHis[i] = acc.transHis[i];
          
   }

   ~bankAccount(){
     delete [] transHis;
   }

   void display(){
     cout << "Account Details: \n" <<endl;
     cout << "Account ID: " << accID << endl;
     cout << "Current Balance: " << balance << endl;
     cout << "Total Number of Transactions: " << trans << endl;
     cout << "Transaction History: " << endl;
     for (int i = 0; i < trans; ++i)
          cout << transHis[i] << endl;
   }

   void updateTransHis(string updated[], int newSize){

          delete [] transHis;
          transHis = new string[newSize];
          for (int i=0; i<trans; ++i )
            transHis[i] = updated[i];
          trans = newSize;  
   }

};

int main(){

     string transactions[3] = {"credit 5067.99", "debit 500", "credit 100"};
     
     bankAccount acc1(2, 4667.99, transactions, 3);

     bankAccount acc2(acc1);

     cout << "Original Account:" << endl;
     cout << "\n" ;
     acc1.display();
     cout << "Copied Account Object: " << endl;
     acc2.display();

     return 0;
}
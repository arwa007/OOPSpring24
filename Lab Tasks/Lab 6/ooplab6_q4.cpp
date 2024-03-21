/*
Name: Arwa Feroze
ID: 23k-0022
Lab 6 Task 4
*/

#include <iostream>
#include <string>
using namespace std;

inline float calcAvg(int runs, int outs){
     float bAvg = runs/outs;
     return bAvg;
}

inline float calcStrike(int runs, int balls){

    float sRate = runs*100/balls;
    return sRate;
}

int main(){
    
    int runs, balls, outs;

    cout << "Enter Total Runs: " << endl;
    cin >> runs;

    cout << "\nEnter Total Balls Faced: " << endl;
    cin >> balls;

    cout << "\nEnter Total Dismissals: " << endl;
    cin >> outs;

    cout << "\nYour Batting Average is: " << calcAvg(runs, outs) << endl;
    cout << "\nYour Strike Rate is:  " << calcStrike(runs, balls);
    return 0;

}
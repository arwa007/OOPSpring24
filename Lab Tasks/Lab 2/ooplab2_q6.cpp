/*
Name: Arwa Feroze
ID: 23k-0022
*/

#include <iostream>

using namespace std;

int calculateGCD(int a, int b, int divisor = 1) {
  
    if (divisor > min(a, b))
        return 1;
    
    if (a % divisor == 0 && b % divisor == 0)
        return divisor;
    
    return calculateGCD(a, b, divisor + 1);
}

// LCM(a, b) = (a * b) / GCD(a, b)
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << calculateGCD(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << calculateLCM(num1, num2) << endl;

    return 0;
}



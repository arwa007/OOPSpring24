/*
Name: Arwa Feroze
ID: 23k-0022
*/
#include <iostream>

using namespace std;

int rev(int a, int b, int n);

int main() {
    int a, b, n = 1;
    cout << "A=";
    cin >> a;
    cout << "B=";
    cin >> b;

    cout << "Before Swapping: \n";
    cout << "A=" << a << ", B=" << b << endl;

    rev(a, b, n);

    return 0;
}

int rev(int a, int b, int n) {
    if (n == 0) {
        cout << "After Swapping\n";
        cout << "A=" << a << ", B=" << b << endl;
        return 0;
    }
    swap(a, b);
    rev(a, b, n - 1);
}


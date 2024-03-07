/*
Name: Arwa Feroze
ID: 23k-0022
Lab 5 Task 3
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class validateString{

string input;

public:

validateString(string input){
    this->input = input;
}

//If you don't make `isValid()` constant, it suggests the function might change the object's state. But since `isValid()` only checks validity without altering the object's state, it's best to make it constant for safety and clarity.
bool isValid() const{

    for (char c : input){
        if (!isalpha(c)){
            return false;
        }
    }

    return true;
}
};

int main() {

    validateString str1("HelloWorld");
    validateString str2("abc123");

    cout << "String 1 is " << (str1.isValid() ? "valid" : "invalid") << endl;
    cout << "String 2 is " << (str2.isValid() ? "valid" : "invalid") << endl;

    return 0;
}

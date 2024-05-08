/*
Name: Arwa Feroze
ID: 23k-0022
Lab 10 Q1
*/
#include <iostream>
#include <string>
using namespace std;

class logo{
    int x;
    string logoname = "Blue Bird";
    public:
    friend class platform;
};

class platform{
    int y;
    public:
    void changelogo(logo &L, string newname){
        cout << "Logo changed from " << L.logoname;
        L.logoname = newname;
        cout << " to " << L.logoname << endl;
    }
};

class server{
    int z;
};

int main(){

    logo l1;
    platform p1;
    p1.changelogo(l1, "Doge Coin");
    return 0;
}

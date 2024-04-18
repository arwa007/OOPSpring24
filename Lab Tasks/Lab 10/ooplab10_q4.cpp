/*
Name: Arwa
ID: 23k-0022
Lab 10 Task 4
*/

#include <iostream>
using namespace std;

class perimeter{
    int length = 5;
    int breadth = 3;

    public:
    friend class print;
};

class print{
    public:
    void display(perimeter& p){
        cout << "Breadth: " << p.breadth << "   |   Length: " << p.length << endl;
    }
};


int main(){

    print p1;
    perimeter peri;
    p1.display(peri);
    return 0;

}

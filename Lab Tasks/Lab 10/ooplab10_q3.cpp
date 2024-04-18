/*
Name: Arwa
ID: 23k-0022
Lab 10 Task 3
*/

#include <iostream>
using namespace std;

class shape{
    int area;

    public:
    shape(){};
    shape(int area) : area(area){}
    shape operator+ (shape &obj){
        shape temp;
        temp.area = this->area + obj.area;
        return temp;
    }

     void display() const {
        cout << "The combined Areas are: " << area << endl;
    }
};

int main() {
    shape shape1(25), shape2(3), combinedArea(0);
    combinedArea = shape1 + shape2;
    combinedArea.display();

    return 0;
}
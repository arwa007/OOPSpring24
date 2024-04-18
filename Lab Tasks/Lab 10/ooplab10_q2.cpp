/*
Name: Arwa
ID: 23k-0022
Lab 10 Task 2
*/

#include <iostream>
using namespace std;

class sample{

    float data;

    public:
    sample(float data) : data(data) {}
    sample operator--() {
        data *= 4;
        return *this;
    }

    sample operator--(int) {
        sample temp = *this;
        data /= 4;
        return temp;
    }

    void display(){
        cout << "Data: " << data << endl;
    }
};

int main(){
    sample num1(5);
    num1--;
    num1.display();
    --num1;
    num1.display();
}

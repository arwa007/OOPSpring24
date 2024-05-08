/*
Name: Arwa Feroze
ID: 23k-0022
Lab 11 Q1
*/
#include <iostream>
using namespace std;

class convert{
    protected:
    double val1;
    double val2;

    public:
    convert(double val1) : val1(val1) {}
    virtual void compute() = 0;
};

class LtoG : public convert{
    public:
    LtoG(double val1) : convert(val1) {}
    void compute () override {
        val2 = val1*0.26412;
        cout << "LtoG:" << endl;
        cout <<" Value 1:  " << val1 << " || Value 2: " << val2 << endl;
        
    }
};

class FtoC : public convert {
    public:
    FtoC(double val1) : convert(val1) {}
    void compute () override {
        val2 = (val1-32)*5/9;
        cout << "FtoC:" << endl;
        cout <<" Value 1:  " << val1 << " || Value 2: " << val2 << endl;
    }
};

int main(){

    convert *c1;
    convert *c2;

    LtoG l(9.8);
    c1 = &l;
    c1->compute();

    FtoC f(97);
    c2 = &f;
    c2->compute();


}
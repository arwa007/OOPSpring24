/*
Name: Arwa Feroze
ID: 23k-0022
Lab 11 Q3
*/
#include <iostream>
using namespace std;

class vehicle {
    protected:
    string make;
    string model;
    int speed;

    public:
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual double calculateFuelEfficiency() = 0;
    string getMake() {return make;}
    string getModel() {return model}
    int getSpeed() {return speed;}
};

class car : public vehicle{
    protected:
    int fuelcap;

    public:
    void accelerate() override {}
    void brake() override {}
    double calculateFuelEfficiency() override {return 0;}

}

class truck : public vehicle{
    protected:
    int cargocap;

    public:
    void accelerate() override {}
    void brake() override {}
    double calculateFuelEfficiency() override {return 0;}

}
/*
Name: Arwa Feroze
ID: 23k-0022
Lab 8 Task 5
*/

#include <iostream>
#include <string>
using namespace std;

class vehicle{
    
    protected:
    string make;
    string model;
    int year;

    public:
    vehicle(string make, string model, int year) : make(make), model(model), year(year){}

    };

class car : public vehicle {

    protected:
    int doors;
    int fEff;

    public:
    car(string make, string model, int year, int doors, int fEff) : vehicle(make, model, year), doors(doors), fEff(fEff) {}
};

class EC : public car {

    protected:
    int battery;

    public:
    EC(string make, string model, int year, int doors, int fEff, int battery) : car(make, model, year, doors, fEff), battery(battery) {}

    void displayEC(){

        cout << "Electric Car Details:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Doors: " << doors << endl;
        cout << "Fuel Efficiency (in liters per kilometers): " << fEff << endl;
        cout << "Battery Life (in kilometers): " << battery << endl;
    }
};

int main(){

    EC e1("Toyota", "Corolla", 2012, 4, 25, 50);
    e1.displayEC();
    return 0;
}
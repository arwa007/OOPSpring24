/*
Name: Arwa Feroze
ID: 23k-0022
Lab 8 Task 3
*/

#include <iostream>
#include <string>
using namespace std;

class Position{
    protected:
    int x;
    int y;
    int z;

    public:
    Position(int x, int y, int z): x(x), y(y), z(z){}

    void displayPos(){
        cout << "Position: " << endl;
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }

};

class Health{
    protected:
    int health;

    public:
    Health(int health) : health(health){}

    void displayHealth(){
        cout << "Health: " << health << endl;
    }
};

class character : protected Health, protected Position{

    string charName;

    public:
    character(int x, int y, int z, int health, string charName) : Position(x, y, z), Health(health), charName(charName) {}

    void displayChar(){
        cout << "Character Details: " << endl;
        displayPos();
       //displayHealth();
       cout<<"Health: "<<health<<endl;
        cout << "Name: " << charName;
    }

};

int main (){

    character c1(1, 2, 3, 10, "Meglinda");
    c1.displayChar();
    return 0;
}
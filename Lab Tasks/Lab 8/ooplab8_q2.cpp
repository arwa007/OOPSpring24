/*
Name: Arwa Feroze
ID: 23k-0022
Lab 8 Task 2
*/

#include <iostream>
#include <string>
using namespace std;

class character{
    int health;
    int damage;

    public:
    character(int health, int damage) : health(health), damage(damage){}

    void displayChar(){
        cout <<"\nCharacter Details:" << endl;
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
    }
};

class enemy : protected character{
    public:
    enemy(int health, int damage) : character(health, damage){}

    void displayEnemy(){
        cout <<"\nCharacter Type: Enemy  " << endl;
        displayChar();
    }
};

class player : protected character{

    public:
    player(int health, int damage) : character(health, damage){}

    void displayPlayer(){
        cout <<"\nCharacter Type: Player " << endl;
        displayChar();
    }
};

class wizard : protected player{
    int magicPower;
    string spells;

    public:
    wizard(int health, int damage, int magicPower, string spells) : player(health, damage), magicPower(magicPower), spells(spells) {}

    void displayWizard(){

        displayPlayer();

        cout << "Player Type: Wizard" << endl;
        cout << "Magic Power: " << magicPower << endl;
        cout << "Spells: " << spells << endl;
    }

};

int main(){

    wizard w1(10, 50, 20, "Abracadabra");
    w1.displayWizard();

    return 0;
}
/*
Name: Arwa Feroze
ID: 23k-0022
Lab 5 Task 6
*/

#include <iostream>
#include <string>
using namespace std;

class graphEngine{
    public:
    string model;
};
class inputHandler{
    public:
    string name;
};
class physicsEngine{
    public: 
    int type;
};
class gameEngine{
    int ID;
    graphEngine GE;
    inputHandler IH;
    physicsEngine PE;

    public:
    gameEngine(int ID, string GE_model, string IH_name, int PE_type){
        this->ID = ID;
        GE.model = GE_model;
        IH.name = IH_name;
        PE.type = PE_type;
    }

    void display(){
        cout << "Engine 1:" << endl;
        cout << "ID: " << ID << endl;
        cout << "Graphics Rendering Engine Model: " <<GE.model << endl;
        cout << "Input Handler Name: " << IH.name << endl;
        cout << "Physics Engine Type: " << PE.type;
    }
};

int main(){

    gameEngine Engine(2365, "Octane", "Drag", 5);
    Engine.display(); 
}
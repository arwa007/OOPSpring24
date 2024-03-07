/*
Name: Arwa Feroze
ID: 23k-0022
Lab 5 Task 7
*/

#include <iostream>
#include <string>
using namespace std;


//Composition is used in the relationship between orderingSystem and menu.
//Aggregation is used in the relationship between payment and order.

class item{
    public:
    string foodname;
    float foodprice;
};

class menu{
    public:
    int numofItems = 0;
    item items[50];

    void addItem(string dish, float dishprice){
        if(numofItems < 50){
        items[numofItems].foodname = dish;
        items[numofItems].foodprice = dishprice;
        numofItems++; 
        }else{
            cout << "Menu Capacity is full." << endl;
        }
    }

    void removeItem(string dish){
        bool found = false;
        for (int i=0; i<numofItems; i++){
            if (items[i].foodname == dish){
                found = true;
                items[i] = items[i+1];
            }
        }
        if(found){
            numofItems--;
        }else{
            cout << "This dish is not in the menu." << endl;
        }
    }

    void displayMenu(){
         for (int i=0; i<numofItems; i++){
            cout << i+1 <<". "<< items[i].foodname << "    $" << items[i].foodprice << endl;
    }
    }

};

class orderingSystem{
    public:
    menu Menu;
};

class order{
    public:
    float amount;
    item ordered[25];

};

class payment{
    public:
    order placedOrder;
};

int main(){

    menu menu1;

    menu1.addItem("Fish", 10);
    menu1.addItem("Soup", 5.25);
    menu1.addItem("Fried Chicken", 7.5);
    menu1.displayMenu();

    cout << "Menu after removing fish: " << endl;
    menu1.removeItem("Fish");
    menu1.displayMenu();



    return 0;
}
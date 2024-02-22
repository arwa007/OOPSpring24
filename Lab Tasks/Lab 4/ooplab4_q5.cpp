/*
Name: Arwa Feroze
ID: 23k-0022
*/

#include <iostream>
#include <string>
using namespace std;

class Office {
    string location;
    int capacity;
    string *furniture; // Pointer to string array

public:
    // Constructor
    Office(string address = "", int limit = 0, int furnitureSize = 0) : location(address), capacity(limit) {
        furniture = new string[furnitureSize]; // Dynamically allocate memory
    }

    // Destructor
    ~Office() {
        delete[] furniture; // Deallocate memory
    }

    // Member functions
    void setFurniture(int index, string item) {
        furniture[index] = item;
    }

    int getCapacity() {
        return capacity;
    }

    string* getFurniture() {
        return furniture;
    }

    string getLocation() {
        return location;
    }

    void display() {
        cout << "-------------------------------------------------" << endl;
        cout << "Location: " << location << endl;
        cout << "Seating capacity: " << capacity << endl;
        cout << "Furniture: " << endl;
        for (int i = 0; i < capacity; i++) {
            cout << furniture[i] << endl;
        }
        cout << "-------------------------------------------------" << endl;
    }
};

int main() {
    // Dynamically allocate an Office object
    Office *o1 = new Office("Los Angeles", 65, 3);
    o1->setFurniture(0, "Desk");
    o1->setFurniture(1, "Table");
    o1->setFurniture(2, "Chair");

    Office *o2 = new Office("Melbourne", 23, 0);
    Office *o3 = new Office("New York", 0, 0);

    string *furnArray = o1->getFurniture();
    cout << "Office 1 Furniture: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << furnArray[i] << endl;
    }

    o1->display();
    o2->display();
    o3->display();

    // Delete dynamically allocated objects
    delete o1;
    delete o2;
    delete o3;

    return 0;
}

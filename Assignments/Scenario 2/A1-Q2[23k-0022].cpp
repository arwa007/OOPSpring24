#include <iostream>
using namespace std;

class DiningTable {
private:
    const static int defaultCapacity = 4;
    int capacity;
    int occupiedSeats;
    int freeSeats;
    bool clean;

public:
    DiningTable() {
        capacity = defaultCapacity;
        occupiedSeats = 0;
        freeSeats = defaultCapacity;
        clean = true;
    }

    DiningTable(int capacity) {
        if (capacity < 6) {
            this->capacity = 4;
        } else {
            this->capacity = 8;
        }
        occupiedSeats = 0;
        freeSeats = this->capacity;
        clean = true;
    }

    int getCapacity(){
        return capacity;
    }

    int getOccupiedSeats(){
        return occupiedSeats;
    }

    int getFreeSeats(){
        return freeSeats;
    }

    bool isClean() {
        return clean;
    }

    bool occupyTable(int groupSize) {
        if (!clean || groupSize > capacity || groupSize > freeSeats) {
            cout << "Apologies, the table cannot be used at the moment." <<endl;
            return false;
        }

        occupiedSeats = groupSize;
        freeSeats -= groupSize;
        clean = false;
        cout << "Table with capacity " << capacity << " has been occupied by a group of " << groupSize << " individuals." <<endl;
        return true;
    }

    bool dine() {
        if (!occupiedSeats || clean) {
            cout << "There is no one seated at the table or it's already clean." << endl;
            return false;
        }

        cout << "Enjoying lunch at the table..." <<endl;
        clean = false;
        return true;
    }

    bool leave() {
        if (!occupiedSeats) {
            cout << "No one is currently seated at the table." <<endl;
            return false;
        }

        cout << "Exiting the table with " << occupiedSeats << " occupied seats." << endl;
        freeSeats += occupiedSeats;
        occupiedSeats = 0;
        return true;
    }

    bool cleanUp() {
        if (occupiedSeats) {
            cout << "It's not possible to clean the table while there are guests seated." << endl;
            return false;
        }

        cout << "Currently cleaning the table..." << endl;
        clean = true;
        return true;
    }
};

void bookTable(DiningTable tableArray[], int groupSize) {
    for (int i = 0; i < 5; ++i) {
        if (tableArray[i].occupyTable(groupSize)) {
            return;
        }
    }
}

void emptyDiningTable(DiningTable& table) {
    table.leave();
    table.cleanUp();
}

int main() {

    cout<<"Name: Arwa Feroze"<<endl<<"ID: 23k-0022"<<endl;
    cout << "Restaurant Reservation System" << endl;
    DiningTable tableArray[5];

    tableArray[0] = DiningTable(8);
    tableArray[1] = DiningTable(8);
    tableArray[2] = DiningTable(4);
    tableArray[3] = DiningTable(4);
    tableArray[4] = DiningTable(4);

    bookTable(tableArray, 4); 
    bookTable(tableArray, 5); 

    tableArray[1].occupyTable(4);
    tableArray[1].dine();
    tableArray[1].leave();
    tableArray[1].cleanUp();

    emptyDiningTable(tableArray[1]);

    return 0;
}

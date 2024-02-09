/*
Name: Arwa Feroze
Roll No.: 23k-0022
*/


#include <iostream>
#include <string>

using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    int capacityLiters;
    int capacityMilliliters;

public:
    // Getter methods
   
    string getCompany() const { 
	return company; 
	}
    
	string getColor() const { 
	return color; 
	}
    
	int getCapacityLiters() const { 
	return capacityLiters; 
	}
    
	int getCapacityMilliliters() const { 
	return capacityMilliliters; 
	}

    // Setter methods
    
    void setCompany(string _company) { 
	company = _company; 
	}
   
    void setColor(string _color) { 
	color = _color; 
	}
    
	void setCapacityLiters(int _capacityLiters) { 
	capacityLiters = _capacityLiters; 
	}
    
	void setCapacityMilliliters(int _capacityMilliliters) { 
	capacityMilliliters = _capacityMilliliters; 
	}

    // Method to update water capacity after consumption
    void consumeWater(int consumedMilliliters) {
        int totalMilliliters = capacityMilliliters + capacityLiters * 1000;
        totalMilliliters -= consumedMilliliters;

        if (totalMilliliters < 0) {
            cout << "Error: Not enough water in the bottle." << endl;
        } else {
            capacityLiters = totalMilliliters / 1000;
            capacityMilliliters = totalMilliliters % 1000;
            cout << "Water consumed successfully." << endl;
        }
    }
};

int main() {
    WaterBottle bottle;

    bottle.setCompany("ABC Company");
    bottle.setColor("Blue");
    bottle.setCapacityLiters(1);
    bottle.setCapacityMilliliters(500);

    cout << "Initial Details:" << endl;
    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getCapacityLiters() << " liters and " << bottle.getCapacityMilliliters() << " milliliters" << endl;

    int consumedMilliliters;
    cout << "\nEnter the amount of water consumed in milliliters: ";
    cin >> consumedMilliliters;

    bottle.consumeWater(consumedMilliliters);

    cout << "\nUpdated Details:" << endl;
    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getCapacityLiters() << " liters and " << bottle.getCapacityMilliliters() << " milliliters" << endl;

    return 0;
}


#include <iostream>
#include <string>

using namespace std;

class BoardMarker {
private:
    string brand;
    string shade;
    bool refillable;
    bool inkStatus;

public:

    // Getter methods
    string getBrand() const { return brand; }
    string getShade() const { return shade; }
    bool isRefillable() const { return refillable; }
    bool isInkDepleted() const { return !inkStatus; }

    // Setter methods
    void setBrand(string _brand) { brand = _brand; }
    void setShade(string _shade) { shade = _shade; }
    void setRefillable(bool _refillable) { refillable = _refillable; }
    void setInkStatus(bool _inkStatus) { inkStatus = _inkStatus; }

    // Writing method
    void write() {
        if (inkStatus) {
            cout << "The board marker writes perfectly.\n";
        } else {
            cout << "The ink of the board marker has run out.\n";
        }
    }

    // Refill method
    void refill() {
        if (refillable) {
            inkStatus = true;
            cout << "The board marker has been refilled.\n";
        } else {
            cout << "This board marker cannot be refilled.\n";
        }
    }
};

int main() {
    
    BoardMarker marker;
    marker.setBrand("Dollar");
    marker.setShade("black");
    marker.setRefillable(true);
    marker.setInkStatus(true);

    marker.write(); 
    marker.setInkStatus(false);
    marker.write(); 
    marker.refill(); 
    marker.write(); 
    return 0;
}


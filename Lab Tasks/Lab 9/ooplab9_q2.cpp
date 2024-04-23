/*
Name: Arwa Feroze
ID: 23K-0022
Lab 9 Task 2
*/
#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.142;

class shape{
    public:
    shape(){}
    virtual double area() const{ return 0;}
    virtual double peri() const{ return 0;}
    virtual void displayProps() const{}
};

class circle : public shape {
    float radius;

    public:
    circle(float radius) : radius(radius){}
   
    double area ()const{
        return pi*radius*radius;
    }

    double peri  ()const{
        return 2*pi*radius;
    }

    void displayProps() const {
        cout << "Properties of the circle:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Diameter: " << 2*radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << peri() << endl;
    }
};

class rectangle : public shape{
    float len1;
    float len2;

    public:
    rectangle(float len1, float len2) : len1(len1), len2(len2){};

    double area ()const{ return len1*len2; }
    double peri ()const{ return 2*len1 + 2*len2; }
    void displayProps()const{ 
        cout << "Properties of the rectangle:" << endl;
        cout << "Length 1: " << len1 << endl;
        cout << "Length 2: " << len2 << endl;
        cout << "Area:  " << area() << endl;   
        cout << "Perimeter: " << peri() << endl;
    }
};

class square : public shape{
    float len;
    public:
    square(float len) : len(len){};

    double area ()const{ return len*len; }
    double peri ()const{ return 4*len; }
    void displayProps()const{ 
        cout << "Properties of the square:" << endl;
        cout << "Length: " << len << endl;
        cout << "Area:  " << area() << endl;   
        cout << "Perimeter: " << peri() << endl;
    }
};

class triangle : public shape {
    protected:
    float sideA;
    float sideB;
    float sideC;
    public:
    triangle(){}
    triangle(float sideA, float sideB, float sideC) : sideA(sideA), sideB(sideB), sideC(sideC){}
    double area () const{
        return 0.5*sideA*sideB*sin(sideC);
    }
    double peri () const{
        return sideA+sideB+sideC;
    }
    void displayProps() const{
        cout << "Properties of the triangle:" << endl;
        cout << "Side A: " << sideA << endl;
        cout << "Side B: " << sideB << endl;
        cout << "Side C: " << sideC << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << peri() << endl;
    }
    
};

class equitri : public triangle {
    public:
    equitri(float side) { sideA = side;}
    double area () const{
        return (sqrt(3)/4)*sideA*sideA;
    }
    double peri () const{ return 3*sideA; }
    void displayProps() const{ 
         cout << "\nProperties of the equilateral triangle:" << endl;
        cout << "Side: " << sideA << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << peri() << endl;
    }

};int main() {
    int choice;
    bool cont = true;

    while (cont) {
        cout << "Select a shape:\n";
        cout << "1. Circle\n";
        cout << "2. Triangle\n";
        cout << "3. Rectangle\n";
        cout << "4. Square\n";
        cout << "Enter choice: ";
        cin >> choice;

        shape *s = nullptr; // Initialize to nullptr

        switch (choice) {
            case 1: {
                float radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                s = new circle(radius);
                break;
            }
            case 2: {
                float sideA, sideB, sideC;
                cout << "Enter three sides of the triangle: ";
                cin >> sideA >> sideB >> sideC;

                if (sideA == sideB && sideB == sideC) {
                    s = new equitri(sideA);
                } else {
                    s = new triangle(sideA, sideB, sideC);
                }
                break;
            }
            case 3: {
                float length, width;
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                s = new rectangle(length, width);
                break;
            }
            case 4: {
                float side;
                cout << "Enter side length of the square: ";
                cin >> side;
                s = new square(side);
                break;
            }
            default:
                cout << "Invalid Choice." << endl;
                break;
        }

        if (s != nullptr) {
            s->displayProps();

            cout << "\nDo you want to calculate properties for another shape? (yes = 1/no = 0): ";
            cin >> choice;
            if (choice == 0) {
                cont = false;
            }

            delete s; // Deallocate memory
        } else {
            cout << "Error creating shape object. Exiting program." << endl;
            break;
        }
    }

    return 0;
}

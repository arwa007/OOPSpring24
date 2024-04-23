/*
Name: Arwa Feroze
ID: 23k-0022
Lab 9 Q1
*/
#include <iostream>
using namespace std;
const double PI = 3.14159265359; // Global constant for pi

class Shape {
public:
    // Calculate area of circle
    double area(double radius) {
        cout << "Calling circ Area func" << endl;
        return PI * radius * radius;
    }

    // Calculate perimeter of circle
    double perimeter(double radius) {
         cout << "Calling circ peri func" << endl;
        return 2 * PI * radius;
    }

    // Calculate area of rectangle
    int area(int length, int width) {
         cout << "Calling rect Area func" << endl;
        return length * width;
    }

    // Calculate perimeter of rectangle
    int perimeter(int length, int width) {
         cout << "Calling rect peri func" << endl;
        return 2 * (length + width);
    }

    // Calculate area of triangle
    double area(double base, double height) {
        cout << "Calling triangle Area func" << endl;
        return 0.5 * base * height;
    }

    // Calculate perimeter of triangle
    double perimeter(double side1, double side2, double side3) {
         cout << "Calling triangle peri func" << endl;
        return side1 + side2 + side3;
    }
};

int main() {
    using namespace std; // Using namespace std

    Shape shape;

    // Circle
    double circle_radius = 5.0;
    cout << "Circle:" << endl;
    cout << "Area: " << shape.area(circle_radius) << endl;
    cout << "Perimeter: " << shape.perimeter(circle_radius) << endl;

    // Rectangle
    int rectangle_length = 4;
    int rectangle_width = 6;
    cout << "\nRectangle:" << endl;
    cout << "Area: " << shape.area(rectangle_length, rectangle_width) << endl;
    cout << "Perimeter: " << shape.perimeter(rectangle_length, rectangle_width) << endl;

    // Triangle
    double triangle_base = 3.0;
    double triangle_height = 4.0;
    double triangle_side1 = 5.0;
    double triangle_side2 = 5.0;
    cout << "\nTriangle:" << endl;
    cout << "Area: " << shape.area(triangle_base, triangle_height) << endl;
    cout << "Perimeter: " << shape.perimeter(triangle_side1, triangle_side2, triangle_base) << endl;

    return 0;
}



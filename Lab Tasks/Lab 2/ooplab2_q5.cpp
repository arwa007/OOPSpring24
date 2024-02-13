/*
Name: Arwa Feroze
ID: 23k-0022
*/

#include <iostream>
#include <string>

using namespace std;
const int MAX_PRODUCTS = 100;

struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

Product products[MAX_PRODUCTS];

int numProducts = 0;

void addProduct(string name, double price, int quantity) {
    if (numProducts >= MAX_PRODUCTS) {
        cout << "Error: Maximum number of products reached." << endl;
        return;
    }

    products[numProducts].id = numProducts + 1; // unique ID
    products[numProducts].name = name;
    products[numProducts].price = price;
    products[numProducts].quantity = quantity;

    cout << "Product added successfully with ID: " << products[numProducts].id << endl;
    numProducts++;
}

void displayProduct(int id) {
    for (int i = 0; i < numProducts; ++i) {
        if (products[i].id == id) {
            cout << "Product ID: " << products[i].id << endl;
            cout << "Product Name: " << products[i].name << endl;
            cout << "Price: $" << products[i].price << endl;
            cout << "Quantity in Stock: " << products[i].quantity << endl;
            return;
        }
    }
    cout << "Product with ID " << id << " not found." << endl;
}

void updateProduct(int id, double price, int quantity) {
    for (int i = 0; i < numProducts; ++i) {
        if (products[i].id == id) {
            products[i].price = price;
            products[i].quantity = quantity;
            cout << "Product information updated successfully." << endl;
            return;
        }
    }
    cout << "Product with ID " << id << " not found." << endl;
}

int main() {
    // Example 
    addProduct("Laptop", 999.99, 10);
    addProduct("Smartphone", 499.99, 20);

    displayProduct(1); //  ID 1
    displayProduct(2); //  ID 2

    updateProduct(1, 899.99, 5); // Update ID 1

    displayProduct(1); // Display updated ID 1

    return 0;
}


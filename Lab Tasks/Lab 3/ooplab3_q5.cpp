/*
*Name: Arwa Feroze
*ID: 23k-0022
*/
#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 100;

class StationaryShop {
private:
    string items[MAX_ITEMS];
    double prices[MAX_ITEMS];
    int itemCount;

public:
    StationaryShop() {
        itemCount = 0;
    }

    // Function to add item and price to the lists
    void addItem(string item, double price) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount] = item;
            prices[itemCount] = price;
            itemCount++;
        } else {
            cout << "Cannot add more items. Maximum limit reached." << endl;
        }
    }

    // Function to retrieve the list of items
    void getItemList() {
        cout << "Items available:" << endl;
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i] << ": $" << prices[i] << endl;
        }
    }

    // Function to modify the price of an item
    void modifyPrice(string item, double newPrice) {
        for (int i = 0; i < itemCount; ++i) {
            if (items[i] == item) {
                prices[i] = newPrice;
                cout << "Price of " << item << " modified to $" << newPrice << endl;
                return;
            }
        }
        cout << "Item not found." << endl;
    }

    // Function to generate a receipt
    void generateReceipt(string boughtItems[], int quantities[], int numItems) {
        double total = 0;
        cout << "\nReceipt:" << endl;
        cout << "Item\t\tQuantity\tPrice" << endl;
        cout << "-------------------------------------" << endl;
        for (int i = 0; i < numItems; ++i) {
            for (int j = 0; j < itemCount; ++j) {
                if (items[j] == boughtItems[i]) {
                    double totalPrice = prices[j] * quantities[i];
                    cout << boughtItems[i] << "\t\t" << quantities[i] << "\t\t$" << totalPrice << endl;
                    total += totalPrice;
                    break;
                }
            }
        }
        cout << "-------------------------------------" << endl;
        cout << "Total:\t\t\t\t$" << total << endl;
    }
};

int main() {
    StationaryShop shop;
    shop.addItem("Pen", 1.5);
    shop.addItem("Notebook", 3.0);
    shop.addItem("Pencil", 1.0);

    cout << "Stationary Shop Menu" << endl;
    cout << "1. Add Item" << endl;
    cout << "2. Retrieve Item List" << endl;
    cout << "3. Modify Price" << endl;
    cout << "4. Generate Receipt" << endl;

    int choice;
    do {
        cout << "Enter your choice (1-4, 0 to exit): ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string item;
                double price;
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: $";
                cin >> price;
                shop.addItem(item, price);
                break;
            }
            case 2:
                shop.getItemList();
                break;
            case 3: {
                string item;
                double newPrice;
                cout << "Enter item name to modify price: ";
                cin >> item;
                cout << "Enter new price: $";
                cin >> newPrice;
                shop.modifyPrice(item, newPrice);
                break;
            }
            case 4: {
                int numItems;
                cout << "Enter number of items bought: ";
                cin >> numItems;
                string boughtItems[numItems];
                int quantities[numItems];
                for (int i = 0; i < numItems; ++i) {
                    cout << "Enter name of item " << i + 1 << ": ";
                    cin >> boughtItems[i];
                    cout << "Enter quantity of item " << i + 1 << ": ";
                    cin >> quantities[i];
                }
                shop.generateReceipt(boughtItems, quantities, numItems);
                break;
            }
            case 0:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

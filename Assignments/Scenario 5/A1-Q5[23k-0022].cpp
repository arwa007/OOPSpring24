#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstring> 

using namespace std;

class BOGOCoupon {
private:
    string coupon_code;
    string valid_from;
    string valid_until;
    string restaurant_code;

public:
    BOGOCoupon(string code, string from, string until, string restaurant)
        : coupon_code(code), valid_from(from), valid_until(until), restaurant_code(restaurant) {}

    string getCouponCode() const {
        return coupon_code;
    }

    bool isValid() const {
        time_t currentTime = time(NULL);
        tm validFromTime = {}, validUntilTime = {};

        if (sscanf(valid_from.c_str(), "%4d%2d%2d", &validFromTime.tm_year, &validFromTime.tm_mon, &validFromTime.tm_mday) != 3 ||
            sscanf(valid_until.c_str(), "%4d%2d%2d", &validUntilTime.tm_year, &validUntilTime.tm_mon, &validUntilTime.tm_mday) != 3) {
            cerr << "Error parsing date." << endl;
            return false;
        }

        validFromTime.tm_year -= 1900; 
        validFromTime.tm_mon -= 1;     
        validUntilTime.tm_year -= 1900;
        validUntilTime.tm_mon -= 1;

        time_t validFromTimestamp = mktime(&validFromTime);
        time_t validUntilTimestamp = mktime(&validUntilTime);

        return currentTime >= validFromTimestamp && currentTime <= validUntilTimestamp;
    }

    string getRestaurantCode() const {
        return restaurant_code;
    }
};

class Restaurant {
private:
    string restaurant_name;
    string location;
    string menu_list[3];
    double price_list[3];
    BOGOCoupon valid_coupon;

public:
    Restaurant(string name, string loc, string menu[3], double prices[3], BOGOCoupon coupon)
        : restaurant_name(name), location(loc), valid_coupon(coupon) {
        for (int i = 0; i < 3; i++) {
            menu_list[i] = menu[i];
            price_list[i] = prices[i];
        }
    }

    string getRestaurantName() const {
        return restaurant_name;
    }

    void displayMenu() const {
        cout << "Welcome to " << restaurant_name << " at " << location << "!" << endl;
        cout << "Our specialities include:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "- " << menu_list[i] << " $" << fixed << setprecision(2) << price_list[i] << endl;
        }
        cout << "-------------------------------------" << endl;
    }

    double generateBill(string ordered_items[3], BOGOCoupon& coupon) const {
        double totalBill = 0;
        if (coupon.isValid() && coupon.getRestaurantCode() == restaurant_name) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; ++j) {
                    if (ordered_items[i] == menu_list[j]) {
                        totalBill += price_list[j];
                        break;
                    }
                }
            }
        } else {
            cout << "Invalid or expired coupon" << endl;
        }

        return totalBill;
    }
};

class User {
private:
    string name;
    int age;
    string mobile_number;
    BOGOCoupon coupons_list;

public:
    User(string n, int a, string mobile, BOGOCoupon& coupon) : name(n), age(a), mobile_number(mobile), coupons_list(coupon) {}

    bool hasValidCoupon(const Restaurant& restaurant, const string& item) const {
        return coupons_list.isValid() && coupons_list.getRestaurantCode() == restaurant.getRestaurantName();
    }
	
	void accumulateCoupon(const BOGOCoupon& coupon) {
    coupons_list = coupon;
	}
	
    void redeemCoupon(Restaurant& restaurant, const string& item, const string& coupon_code) {
        if (coupons_list.getCouponCode() == coupon_code && hasValidCoupon(restaurant, item)) {
            cout << "Coupon redeemed successfully for " << item << " at " << restaurant.getRestaurantName() << endl;
        } else {
            cout << "Invalid or expired coupon for " << item << " at " << restaurant.getRestaurantName() << endl;
        }
    }
};
int main() {

    cout<<"Name: Arwa Feroze"<<endl<<"ID: 23k-0022"<<endl;


    BOGOCoupon foodHavenCoupon("FH-BOGO-12345", "20220224", "20240301", "Food Haven");
    BOGOCoupon pixelBitesCoupon("PB-BOGO-67890", "20220224", "20240301", "Pixel Bites");

    string foodHavenMenu[3] = {"Sushi", "Pad Thai", "Mango Tango"};
    double foodHavenPrices[3] = {15.99, 12.49, 9.99};
    Restaurant foodHaven("Food Haven", "City Center", foodHavenMenu, foodHavenPrices, foodHavenCoupon);

    string pixelBitesMenu[3] = {"Binary Burger", "Quantum Quinoa", "Data Donuts"};
    double pixelBitesPrices[3] = {8.99, 10.49, 5.99};
    Restaurant pixelBites("Pixel Bites", "Cyber Street", pixelBitesMenu, pixelBitesPrices, pixelBitesCoupon);

    User user("Sara Patel", 28, "9876543210", foodHavenCoupon);

    foodHaven.displayMenu();
    pixelBites.displayMenu();

    string orderedItem = "Sushi";  // Changed ordered item to match Food Haven's menu
    string couponCode = "FH-BOGO-12345";  // Changed coupon code to match Food Haven's coupon

    if (user.hasValidCoupon(foodHaven, orderedItem)) {
        user.redeemCoupon(foodHaven, orderedItem, couponCode);
    } else {
        cout << "No valid coupon for " << orderedItem << " at " << foodHaven.getRestaurantName() << endl;
    }

    return 0;
}

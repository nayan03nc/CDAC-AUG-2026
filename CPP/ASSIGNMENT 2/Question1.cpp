#include <iostream>
#include <string>
using namespace std;

// ---------------- Product class part A ----------------
class Product {
private:
    int productId;
    string name;
    double price;
    int quantity;

public:
    void acceptDetails() {
        cout << "\nEnter Product ID: ";
        cin >> productId;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayDetails() const {
        cout << productId << "\t" << name << "\t" << price
             << "\t" << quantity << "\t" << totalValue();
        if (isLowStock(10))
            cout << "  <-- LOW STOCK";
        cout << endl;
    }

    double totalValue() const {
        return price * quantity;
    }

    bool isLowStock(int threshold) const {
        return quantity < threshold;
    }

    // getters (used by main to find highest value / low stock list)
    string getName() const
    { return name; }
    int getQuantity() const
    { return quantity; }
};
// ---------------- Part B: Function Overloading

double reorderCost(int qty, double unitPrice) {
    return qty * unitPrice;
}

double reorderCost(double qty, double unitPrice) {
    return qty * unitPrice;
}

double reorderCost(int qty, double unitPrice, double taxRate) {
    double base = qty * unitPrice;
    return base + (base * taxRate / 100);
}

double applyDiscount(double price, double discountPercent = 10.0) {
    return price - (price * discountPercent / 100);
}

int main1() {
    const int SIZE = 5;
    Product products[SIZE];

    cout << "===== ENTER DETAILS FOR " << SIZE << " PRODUCTS =====\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\n--- Product " << (i + 1) << " ---";
        products[i].acceptDetails();
    }

    cout << "\n===== INVENTORY REPORT =====\n";
    cout << "ID\tName\tPrice\tQty\tTotal Value\n";
    for (int i = 0; i < SIZE; i++) {
        products[i].displayDetails();
    }

    // Highest value product
    int highestIndex = 0;
    for (int i = 1; i < SIZE; i++) {
        if (products[i].totalValue() > products[highestIndex].totalValue())
            highestIndex = i;
    }
    cout <<endl<< "Highest Value Product : " << products[highestIndex].getName()
         << " (Rs. " << products[highestIndex].totalValue() << ")\n";

    // Low stock products
    int threshold;
    cout <<endl<< "Enter low stock threshold: ";
    cin >> threshold;

    cout << "Low Stock (threshold: " << threshold << ") : ";
    bool anyLow = false;
    for (int i = 0; i < SIZE; i++) {
        if (products[i].isLowStock(threshold)) {
            cout << products[i].getName() << " ";
            anyLow = true;
        }
    }
    if (!anyLow) cout << "None";
    cout<<endl;
    // ---------------- Part B demo --
    cout << "\n===== FUNCTION OVERLOADING DEMO =====\n";
      cout << "reorderCost(int, double)          : " << reorderCost(10, 25.5) << endl;
      cout << "reorderCost(double, double)       : " << reorderCost(2.5, 100.0) << endl;
      cout << "reorderCost(int, double, tax)     : " << reorderCost(10, 25.5, 18.0) << endl;

      cout << "applyDiscount(price)              : " << applyDiscount(1000.0) << endl;
      cout << "applyDiscount(price, discount)    : " << applyDiscount(1000.0, 25.0) << endl;

      return 0;
  }


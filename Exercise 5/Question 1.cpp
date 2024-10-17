#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    int code;
    int stock;
    float price;

public:
    Product() : name(""), code(0), stock(0), price(0.0) {}

    void setProductInfo() {
        cout << "Enter product name: ";
        getline(cin, name);
        cout << "Enter product code: ";
        cin >> code;
        cout << "Enter stock quantity: ";
        cin >> stock;
        cout << "Enter product price: ";
        cin >> price;
        cin.ignore(); 
    }


    void updateStock() {
        int newStock;
        cout << "Enter new stock quantity: ";
        cin >> newStock;
        stock = newStock;
        cout << "Stock updated successfully.\n";
    }


    void updatePrice() {
        float newPrice;
        cout << "Enter new price: ";
        cin >> newPrice;
        price = newPrice;
        cout << "Price updated successfully.\n";
    }


    void showCode() const {
        cout << "Product Code: " << code << endl;
    }


    void showProductInfo() const {
        cout << "Product Name: " << name << endl;
        cout << "Product Code: " << code << endl;
        cout << "Stock Quantity: " << stock << endl;
        cout << "Price: " << price << endl;
    }


    bool isProductSet() const {
        return code != 0;
    }
};

int main() {
    Product product;
    int option;

    do {
        cout << "***********************************\n";
        cout << "Menu:\n";
        cout << "1. Enter product information\n";
        cout << "2. Update stock\n";
        cout << "3. Update price\n";
        cout << "4. Show product code\n";
        cout << "5. Show all product information\n";
        cout << "6. Exit\n";
        cout << "***********************************\n\n";
        cout << "Select an option: ";
        cin >> option;
        cin.ignore();

        switch (option) {
        case 1:
            product.setProductInfo();
            break;
        case 2:
            if (product.isProductSet()) {
                product.updateStock();
            }
            else {
                cout << "Please enter product information first.\n";
            }
            break;
        case 3:
            if (product.isProductSet()) {
                product.updatePrice();
            }
            else {
                cout << "Please enter product information first.\n";
            }
            break;
        case 4:
            if (product.isProductSet()) {
                product.showCode();
            }
            else {
                cout << "Please enter product information first.\n";
            }
            break;
        case 5:
            if (product.isProductSet()) {
                product.showProductInfo();
            }
            else {
                cout << "Please enter product information first.\n";
            }
            break;
        case 6:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
        }
    } while (option != 6);

    return 0;
}
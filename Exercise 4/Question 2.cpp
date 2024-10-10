#include <iostream>
#include <string>

using namespace std;

struct TechProduct {
    int productCode;
    string brand;
    string model;
    float price;
    float screenSize;
    int storage;
};

struct FashionProduct {
    int productCode;
    string brand;
    string model;
    float price;
    char size;
    char gender;
};

int main() {
    TechProduct techProducts[5];
    FashionProduct fashionProducts[5];
    int techCount = 0, fashionCount = 0;
    int choice;

    do {
        cout << "1. Add Tech Product\n"
             << "2. Add Fashion Product\n"
             << "3. Show Tech Products\n"
             << "4. Show Fashion Products\n"
             << "5. Show All Products\n"
             << "6. Exit\n"
             << "Please make your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (techCount < 5) {
                    cout << "Enter Product Code, Brand, Model, Price, Screen Size, Storage: ";
                    cin >> techProducts[techCount].productCode >> techProducts[techCount].brand 
                        >> techProducts[techCount].model >> techProducts[techCount].price 
                        >> techProducts[techCount].screenSize >> techProducts[techCount].storage;
                    techCount++;
                } else {
                    cout << "You have reached the limit for Tech products." << endl;
                }
                break;
            case 2:
                if (fashionCount < 5) {
                    cout << "Enter Product Code, Brand, Model, Price, Size, Gender: ";
                    cin >> fashionProducts[fashionCount].productCode >> fashionProducts[fashionCount].brand
                        >> fashionProducts[fashionCount].model >> fashionProducts[fashionCount].price 
                        >> fashionProducts[fashionCount].size >> fashionProducts[fashionCount].gender;
                    fashionCount++;
                } else {
                    cout << "You have reached the limit for Fashion products." << endl;
                }
                break;
            case 3:
                for (int i = 0; i < techCount; i++) {
                    cout << techProducts[i].productCode << " " << techProducts[i].brand << " "
                         << techProducts[i].model << " " << techProducts[i].price << " "
                         << techProducts[i].screenSize << " " << techProducts[i].storage << endl;
                }
                break;
            case 4:
                for (int i = 0; i < fashionCount; i++) {
                    cout << fashionProducts[i].productCode << " " << fashionProducts[i].brand << " "
                         << fashionProducts[i].model << " " << fashionProducts[i].price << " "
                         << fashionProducts[i].size << " " << fashionProducts[i].gender << endl;
                }
                break;
            case 5:
                cout << "Tech Products:" << endl;
                for (int i = 0; i < techCount; i++) {
                    cout << techProducts[i].productCode << " " << techProducts[i].brand << " "
                         << techProducts[i].model << " " << techProducts[i].price << " "
                         << techProducts[i].screenSize << " " << techProducts[i].storage << endl;
                }
                cout << "Fashion Products:" << endl;
                for (int i = 0; i < fashionCount; i++) {
                    cout << fashionProducts[i].productCode << " " << fashionProducts[i].brand << " "
                         << fashionProducts[i].model << " " << fashionProducts[i].price << " "
                         << fashionProducts[i].size << " " << fashionProducts[i].gender << endl;
                }
                break;
            case 6:
                cout << "Exiting." << endl;
                break;
            default:
                cout << "Invalid selection." << endl;
        }
    } while (choice != 6);

    return 0;
}
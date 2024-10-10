#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int size = 9;
    int priceList[size] = {250, 140, 80, 70, 1200, 450, 325, 500, 2450};
    
    // Sorting
    sort(priceList, priceList + size);
    
    int maxPrice;
    cout << "Enter your maximum price: ";
    cin >> maxPrice;

    cout << "Products within your maximum price:" << endl;
    for (int i = 0; i < size; i++) {
        if (priceList[i] <= maxPrice) {
            cout << priceList[i] << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

namespace Product {
    enum Size { S, M, L };
    enum Color { RED, WHITE, BLACK };

    struct Shirt {
        Size size;
        Color color;
        int stock;
    };

    enum Model { BACKPACK, WALLET, HANDBAG };
    enum BagColor { RED_BAG, WHITE_BAG, BLACK_BAG, GREEN };
    enum Fabric { COTTON, CANVAS, JUTE };

    struct Bag {
        Model model;
        BagColor color;
        Fabric fabric;
        int stock;
    };

    Shirt enterShirtInfo() {
        Shirt shirt;
        int sizeChoice, colorChoice;

        cout << "Enter shirt size (0: S, 1: M, 2: L): ";
        cin >> sizeChoice;
        shirt.size = static_cast<Size>(sizeChoice);

        cout << "Enter shirt color (0: Red, 1: White, 2: Black): ";
        cin >> colorChoice;
        shirt.color = static_cast<Color>(colorChoice);

        cout << "Enter shirt stock: ";
        cin >> shirt.stock;

        return shirt;
    }

    Bag enterBagInfo() {
        Bag bag;
        int modelChoice, colorChoice, fabricChoice;

        cout << "Enter bag model (0: Backpack, 1: Wallet, 2: Handbag): ";
        cin >> modelChoice;
        bag.model = static_cast<Model>(modelChoice);

        cout << "Enter bag color (0: Red, 1: White, 2: Black, 3: Green): ";
        cin >> colorChoice;
        bag.color = static_cast<BagColor>(colorChoice);

        cout << "Enter bag fabric (0: Cotton, 1: Canvas, 2: Jute): ";
        cin >> fabricChoice;
        bag.fabric = static_cast<Fabric>(fabricChoice);

        cout << "Enter bag stock: ";
        cin >> bag.stock;

        return bag;
    }

    void displayShirtFeatures(Shirt shirt) {
        cout << "Shirt Features:" << endl;
        cout << "Size: " << (shirt.size == S ? "S" : shirt.size == M ? "M" : "L") << endl;
        cout << "Color: " << (shirt.color == RED ? "Red" : shirt.color == WHITE ? "White" : "Black") << endl;
        cout << "Stock: " << shirt.stock << endl;
    }

    void displayBagFeatures(Bag bag) {
        cout << "Bag Features:" << endl;
        cout << "Model: " << (bag.model == BACKPACK ? "Backpack" : bag.model == WALLET ? "Wallet" : "Handbag") << endl;
        cout << "Color: " << (bag.color == RED_BAG ? "Red" : bag.color == WHITE_BAG ? "White" : bag.color == BLACK_BAG ? "Black" : "Green") << endl;
        cout << "Fabric: " << (bag.fabric == COTTON ? "Cotton" : bag.fabric == CANVAS ? "Canvas" : "Jute") << endl;
        cout << "Stock: " << bag.stock << endl;
    }

    void displayFeatures() {
        Shirt shirt = enterShirtInfo();
        Bag bag = enterBagInfo();
        displayShirtFeatures(shirt);
        displayBagFeatures(bag);
    }
}

int main() {
    Product::displayFeatures();
    return 0;
}
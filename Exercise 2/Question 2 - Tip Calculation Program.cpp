#include <iostream>
#include <math.h>

using namespace std;

int calculateAccount(int amount, int tip_rate, int people) {
    int tip = (amount * tip_rate) / 100; 
    int total_amount = amount + tip;
    int amount_per_person = total_amount / people;


    cout << "Total tip: " << tip << endl;
    cout << "Total amount (including tip): " << total_amount << endl;
    cout << "Amount per person: " << amount_per_person << endl;

    return total_amount;
}

int main() {
    int amount, tip_rate, people;

    cout << "Enter account amount: ";
    cin >> amount;

    cout << "Enter tip rate (in percentage): ";
    cin >> tip_rate;

    cout << "Enter number of people: ";
    cin >> people;

    calculateAccount(amount, tip_rate, people);

    return 0;
}
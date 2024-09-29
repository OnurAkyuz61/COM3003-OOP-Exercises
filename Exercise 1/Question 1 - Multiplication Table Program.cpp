#include <iostream>

using namespace std;

int main() {
    int number, answer, correctAnswer;
    char choice;

    do {
        cout << "Enter number: ";
        cin >> number;

        if (number <= 0) {
            cout << "Number must be greater than zero" << endl;
            continue;
        }

        for (int i = 1; i <= 9; ++i) {
            cout << number << " * " << i << " = ";
            cin >> answer;
            correctAnswer = number * i;

            if (answer != correctAnswer) {
                cout << "Wrong answer ... Correct answer: " << number << " * " << i << " = " << correctAnswer << endl;
                cout << "Would you like to continue? (y / n): ";
                cin >> choice;
                if (choice == 'n' || choice == 'N') return 0;
                break;
            }
        }
    } while (true);

    return 0;
}
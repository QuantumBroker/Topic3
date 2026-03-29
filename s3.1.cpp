#include <iostream>
using namespace std;

// n - основа, p - степінь
double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    double val;
    int exp;
    char choice;

    cout << "Enter base value (e.g. ball velocity): ";
    cin >> val;
    cout << "Do you want to enter exponent? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter exponent: ";
        cin >> exp;
        cout << "Result: " << power(val, exp) << endl;
    } else {
        // Виклик з аргументом за замовчуванням
        cout << "Result (squared by default): " << power(val) << endl;
    }
    return 0;
}

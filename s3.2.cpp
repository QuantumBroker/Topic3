#include <iostream>
using namespace std;

void zeroSmaller(int &a, int &b) {
    if (a < b) a = 0;
    else b = 0;
}

int main() {
    int score1, score2;
    cout << "Enter two integer values (e.g. object IDs or scores): ";
    cin >> score1 >> score2;

    zeroSmaller(score1, score2);

    cout << "After processing zeroSmaller: " << endl;
    cout << "Value 1: " << score1 << ", Value 2: " << score2 << endl;
    return 0;
}

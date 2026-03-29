#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

// Функція повертає структуру з найбільшим значенням
Distance maxDistance(Distance d1, Distance d2) {
    float total1 = d1.feet * 12 + d1.inches;
    float total2 = d2.feet * 12 + d2.inches;
    
    return (total1 > total2) ? d1 : d2;
}

int main() {
    Distance dist1 = {10, 6.5};
    Distance dist2 = {12, 2.0};

    Distance maxD = maxDistance(dist1, dist2);

    cout << "Maximum distance is: " << maxD.feet << "'-" << maxD.inches << "\"" << endl;
    return 0;
}

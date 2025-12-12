#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float x;
    cout << "Enter x: ";
    cin >> x;
    float sum = 0;
    for (auto i = 1; i <= 5; i++) {
        sum += i;
    }
    float Y = log(sum) + x * x;
    cout << endl << "Y = " << Y << endl;
    cout << "Enter x for second formula: ";
    cin >> x;
    float product = 1;
    for (auto k = 1; k <= 5; k++) {
        product *= tan(k * x);
    }
    float Z = product + sqrt(x);
    cout << "Z = " << Z << endl;

    return 0;
}
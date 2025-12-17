#include <cmath>
#include <iostream>

using namespace std;

int main() {
    //123
    float x;

    cout << "Enter x: ";
    cin >> x;

    const float sum = 15.0f;

    float Y = log(sum) + x * x;

    cout << endl << "Y = " << Y << endl;

    cout << "Enter x for second formula: ";
    cin >> x;

    float product = 1.0f;
    for (int k = 1; k <= 5; k++) {
        product *= tan(k * x);
    }

    float Z = product + sqrt(x);

    cout << "Z = " << Z << endl;

    return 0;
}
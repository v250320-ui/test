#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, x, F;
	cout << "print a: ";
	cin >> a;
	cout << "print b: ";
	cin >> b;
	cout << "print c: ";
	cin >> c;
	cout << "print x: ";
	cin >> x;
	if (x < 0 && b != 0) {
		F = a - (x / (10 + b));
	}
	else if (x > 0 && b == 0) {
		F = (x - a) / (x - c);
	}
	else {
		F = 3 * x + 2 / c;
	}
	cout << fixed << setprecision(3);
	cout << "\n Result:" << endl;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ",;
		cout << "F = " << F << endl;
	return 0;
}
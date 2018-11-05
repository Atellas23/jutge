#include <iostream>
using namespace std;

double factorial(double k) {
	if (k == 0) return 1;
	return k*factorial(k-1);
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(10);
	double e;
	int n;
	while (cin >> n) {
		e = 0;
		for (double i = 0; i < n; ++i) {
			e += double(1)/factorial(i);
		}
		cout << "With " << n << " term(s) we get " << e << '.' << endl;
	}
}
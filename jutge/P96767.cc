#include <iostream>
using namespace std;

double power(double x, int n) {
	if (n == 0) return 1;
	else return x*power(x,n-1);
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	double x, x1;
	cin >> x;
	int i = 0;
	double s = 0;
	while (cin >> x1) {
		s += x1*power(x,i);
		++i;
	}
	cout << s << endl;
}
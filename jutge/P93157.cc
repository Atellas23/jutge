#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a == 1 or b == 1) return 1;
	else if (a == 0 and b != 0) return b;
	else if (b == 0 and a != 0) return a;
	else if (a == 0 and b == 0) return 1;
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

bool read_rational(int& num, int& den) {
	num = 0;
	char a;
	while (cin >> a and a != '/') {
		if (a < '0' or a > '9') return false;
		num *= 10;
		num += a - '0';
	}
	cin >> den;
	if (den == 0) return false;
	int y = gcd(num,den);
	num /= y;
	den /= y;
	return true;
}

int main() {
	int num,den;
	while (read_rational(num,den)) {
		cout << num << ' ' << den << endl;
	}
}
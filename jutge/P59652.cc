#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void read_rational(int& num, int& den) {
	num = 0;
	char a;
	while (cin >> a and a != '/') {
		num *= 10;
		num += a - '0';
	}
	cin >> den;
	int y = gcd(num,den);
	num /= y;
	den /= y;
}

int main() {
	int num,den;
	read_rational(num,den);
	cout << num << ' ' << den << endl;
}
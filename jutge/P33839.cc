#include <iostream>
using namespace std;

void sumofdigits(int n) {
	int aux = n;
	if (n / 10 ==  0) cout << "The sum of the digits of " << n << " is " << n << "." << endl;
	else {
		int s = 0;
		while (n != 0) {
			s += n % 10;
			n /= 10;
		}
		cout << "The sum of the digits of " << aux << " is " << s << "." << endl;
	}
}

int main() {
	int n;
	while (cin >> n) sumofdigits(n);
}

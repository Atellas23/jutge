#include <iostream>
using namespace std;

int number_of_digits(int n) {
	if (n/10 == 0) return 1;
	return 1 + number_of_digits(n/10);
}

int middle_digit(int n) {
	int y = number_of_digits(n)/2;
	for (int i = 0; i < y; ++i) n /= 10;
	return n%10;
}

int main() {
	int n,a,i=0,c=0;
	bool found = false, even;
	cin >> n;
	cin >> a;
	even = number_of_digits(a)%2 == 0;
	int m = middle_digit(a);
	while (not found and i < 2*n-1 and not even) {
		++c;
		++i;
		cin >> a;
		if (number_of_digits(a)%2 == 0) even = true;
		else {
			if (middle_digit(a) != m) found = true;
		}
	}
	if (found) {
		if (c%2 == 0) cout << 'B' << endl;
		else cout << 'A' << endl;
	}
	else if (even) {
		if (c%2 == 0) cout << 'B' << endl;
		else cout << 'A' << endl;
	}
	else cout << '=' << endl;
}
#include <iostream>
using namespace std;

int digprod(int n) {
	if (n == 0) return 1;
	else return (n%10)*digprod(n/10);
}

bool has_consecutive_digits(int n) {
	while (n != 0) {
		if ((n % 10) == ((n/10) % 10)) return true;
		else n /= 10;
	}
	return false;
}

bool es_bufo(int n) {
	if (n%10 == (n/10)%10) return true;
	else return (not has_consecutive_digits(digprod(n)) and es_bufo(digprod(n)));
}

int main() {
	int n;
	while (cin >> n) {
		if (es_bufo(n)) cout << "si" << endl;
		else cout << "no" << endl;
	}
}

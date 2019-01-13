#include <iostream>
using namespace std;

bool multiple_11 (int n) {
	if (n < 11) return n == 0;
	int suma = 0;
	int signe = 1;
	while (n > 0) {
		suma += signe*(n%10);
		n /= 10;
		signe *= -1;
	}
	if (suma < 0) suma *= -1;
	return multiple_11(suma);
}

int main() {
	int n;
	while (cin >> n) {
		if (multiple_11(n)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int i,x;
	cin >> i;
	while (i > 0) {
		--i;
		cin >> x;
		cout << x << (isPrime(x) ? " is prime" : " is not prime") << endl;
	}
}
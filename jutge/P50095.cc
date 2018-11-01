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
	int x;
	while (cin >> x and isPrime(x)) {
		int j = 1 + x%2;
		while(not isPrime(x+j)) {
			j += 2;
		}
		cout << x+j << endl;
	}
}
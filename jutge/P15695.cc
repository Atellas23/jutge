#include <iostream>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

//Precondició: n >= 2 natural.
int largest_prime_factor(int n) {
	if (is_prime(n)) return n;
	int l = 2;
	for (int i = 2; i*i <= n; ++i) {
		if (is_prime(i) and n%i == 0) l = i;
	}
	return l;
}

int main() {
	int n;
	while (cin >> n) cout << largest_prime_factor(n) << endl;
}
#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int o = a, p = b;
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	cout << "The gcd of " << o << " and " << p << " is " << a << "." << endl;
}
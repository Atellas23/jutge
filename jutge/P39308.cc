#include <iostream>
using namespace std;
typedef long long ln;

void divisors(ln n,ln d) {
	if (d*d > n) return;
	if (d*d <= n and n%d == 0) {
		cout << " " << d;
		divisors(n,d+1);
		if (d*d != n) cout << " " << n/d;
	}
	else if (n%d != 0) divisors(n,++d);
}

int main() {
	ln n;
	while (cin >> n) {
		cout << "divisors of " << n << ":";
		divisors(n,1);
		cout << endl;
	}
}

#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
	q = 0;
	int d = 2;
	while (d*d <= n) {
		int q2 = 0;
		while (n % d == 0) {
			++q2;
			n /= d;
		}
		if (q2 > q) {
			q = q2;
			f = d;
		}
		++d;
	}
	if (q == 0) {
		q = 1;
		f = n;
	}
}

int main() {
	int n;
	while (cin >> n) {
		int f,q;
		factor(n, f, q);
		cout << f << ' ' << q << endl;
	}
}
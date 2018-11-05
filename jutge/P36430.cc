#include <iostream>
using namespace std;

int sq(int n) {
	return n*n;
}

//Precondition: n is a perfect square.
int sqroot(int n) {
	for (int i = 0; i*i <= n; ++i) {
		if (i*i == n) return i;
	}
}

bool is_perfect_square(int n) {
	for (int i = 0; i*i <= n; ++i) {
		if (i*i == n) return true;
	}
	return false;
}

int main() {
	int a,b,c,d,n=0,m=0;
	bool found = false;
	cin >> a >> b >> c >> d;
	for (int j = c; j <= d and not found; ++j) {
		for (int i = a; i <= b and not found; ++i) {
			if (is_perfect_square(sq(i)+sq(j))) {
				n = i;
				m = j;
				found = true;
			}
		}
		
	}
	if (n == 0 and m == 0) cout << "No solution!" << endl;
	else cout << min(n,m) << "^2 + " << max(n,m) << "^2 = " << sqroot(sq(n)+sq(m)) << "^2" << endl;
}
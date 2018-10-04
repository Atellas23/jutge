#include <iostream>
using namespace std;

double harmonic(int n, int m) {
	double z = 0;
    for (int i = m + 1; i <= n; ++i) z += 1.0/i;
	return z;
}

int main() {
    cout.setf(ios::fixed);
	cout.precision(10);
	int n,m;
    while (cin >> n >> m) cout << harmonic(n,m) << endl;
}

#include <iostream>
using namespace std;

int pow2(int k) {
	int p = 1;
	while (k > 0) {
		p *= 2;
		--k;
	}
	return p;
}

int combinacions(int n,int k) {
	if (k == 0) return 1;
	return combinacions(n-1,k-1)*n/k;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int c,t;
	while(cin >> t >> c) cout << double(combinacions(t,c))/pow2(t) << endl;
}

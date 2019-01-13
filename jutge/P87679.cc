#include <iostream>
using namespace std;

double pow(int k,double p) {
	double r = 1.0;
	while (k > 0) {
		r *= p;
		--k;
	}
	return r;
}

int combinacions(int n,int k) {
	if (k == 0) return 1;
	return combinacions(n-1,k-1)*n/k;
}

void escriu(int i,double x) {
	cout << i << ' ';
	for (int j = 0; j < int(35*x); ++j) cout << 'X';
	cout << endl;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int t;
	double p;
	while(cin >> t >> p) {
		for (int i = 0; i <= t; ++i) escriu(i,combinacions(t,i)*pow(i,p)*pow(t-i,1-p));
	}
}

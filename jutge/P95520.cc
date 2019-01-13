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

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int c,t;
	double p;
	while(cin >> t >> c >> p) cout << combinacions(t,c)*pow(c,p)*pow(t-c,1-p) << endl;
}

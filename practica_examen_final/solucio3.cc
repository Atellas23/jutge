#include <iostream>
using namespace std;

int nf (int n,int d) {
	//d es el divisor mes petit que queda per explorar
	if (n == 1) return 0;
	if (d*d > n) return 1; //es primer, no cal explorar mes
	if (n%d == 0) return 1+nf(n/d,d);
	return nf(n,++d);
}

int numFactors(int n) {
	return nf(n,2);
}

int main() {
	int n;
	while (cin >> n) cout << numFactors(n) << endl;
}
